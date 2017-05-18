//
// Created by softboy on 18/05/2017.
//

extern "C" {
void  get_name()
{

}
/**
 *  Function that is called by PHP right after the PHP process
 *  has started, and that returns an address of an internal PHP
 *  strucure with all the details and features of your extension
 *
 *  @return void*   a pointer to an address that is understood by PHP
 */
void *get_module()
{
   return (void *)get_name;
}
}