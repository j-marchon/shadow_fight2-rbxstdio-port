// KHDLKDNHNFG$$IJFJAGDKJGH @ RVA 0x34D4918

bool KHDLKDNHNFG__IJFJAGDKJGH(KHDLKDNHNFG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_045686cc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_045686cc = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (__this->fields).BGCEELKLNFP;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

