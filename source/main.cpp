#include <iostream>

#include <pmp/io/io.h>
#include <pmp/SurfaceMesh.h>

int main(int argc, char* argv[])
{
	std::cout << "Mesh denoiser" << std::endl;
	
	if (argc > 1)
	{
		pmp::SurfaceMesh input_mesh;
		std::string input_mesh_filename(argv[1]);
		pmp::read(
			input_mesh,
			input_mesh_filename
		);
		
		std::cout
			<< "Processing file : " << input_mesh_filename << std::endl
			<< "Nb. vertices : " << input_mesh.n_vertices() << std::endl
			<< "Nb. faces : " << input_mesh.n_faces() << std::endl
			;
	}
	
	return 0;
}