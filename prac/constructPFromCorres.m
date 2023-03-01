function Construct_P_From_Corres = constructPFromCorres()
	%Observation=	[0,0,0,433,796;0,32,0,201,640;0,32,28,155,417;16,32,28,286,358;32,32,28,380,308;32,16,28,496,349;32,0,28,639,398;
	%			17,33,27,284,350;14,33,28,280,350;12,37,29,280,360;12,40,30,290,360;18,39,29,281,340;12,39,30,290,340;
	%			32,0,0,596,610;16,0,28,557,478;0,0,28,444,567;0,16,28,285,486;0,16,18,284,596;20,-1,19,581,540];
	
	Observation=[4,4,0,4,3;3,4,0,6,3;2,4,0,8,3];
	%n = input ("number of correspondence points: ");
	n=size(Observation)(1);
	A = zeros(2*n,12);
	for i=1:n
		x=Observation(i,1);
		y=Observation(i,2);
		z=Observation(i,3);
		u=Observation(i,4);
		v=Observation(i,5);
		%s=input("enter corres point coordinates separated by spaces: ", "s");
		%[x,y,z,u,v]=sscanf(s, "%f %f %f %f %f", "C");
		A(2*i-1,:)= [x,y,z,1,0,0,0,0,-u*x,-u*y,-u*z,-u];
		A(2*i,:)= [0,0,0,0,x,y,z,1,-v*x,-v*y,-v*z,-v];
    	end
    	[s,l]=eig(A'*A);
    	P_vector = s(:,1)/norm(s(:,1))
    	P=reshape(P_vector,4,3);
    	P=P'
    	[q,r]=qr([P(:,1),P(:,2),P(:,3)])
    	t = inv(r)*P(:,4)
    			
endfunction

