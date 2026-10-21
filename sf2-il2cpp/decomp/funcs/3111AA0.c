// LMDGNPDFNKF$$NIIAHHEEJAO @ RVA 0x3111AA0

bool LMDGNPDFNKF__NIIAHHEEJAO
               (LMDGNPDFNKF_o *__this,System_String_o *IKKAMAMLIKA,int32_t *DFIBGGDJPLM,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if ((DAT_04566587 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_TryGetValue__);
    DAT_04566587 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).NMCOKPCMEPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__TryGetValue
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,DFIBGGDJPLM,
                       Method_System_Collections_Generic_Dictionary<string,_int>_TryGetValue__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

