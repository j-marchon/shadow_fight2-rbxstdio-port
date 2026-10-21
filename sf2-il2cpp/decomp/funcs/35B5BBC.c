// FDJKKAFIEFB$$OEAAABPOILN @ RVA 0x35B5BBC

bool FDJKKAFIEFB__OEAAABPOILN(FDJKKAFIEFB_o *__this,System_String_o *JEHFOBHMGJM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568eb9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    DAT_04568eb9 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(JEHFOBHMGJM,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields)._ELDCPOBNFJJ_k__BackingField != (DBNEEHGBCJD_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).ELBMCMNELDD;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (__this_00,(Il2CppObject *)JEHFOBHMGJM,
                         Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__)
      ;
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

