// BMBFOPNOLCF$$PHECIGEPFPJ @ RVA 0x3251788

void BMBFOPNOLCF__PHECIGEPFPJ(BMBFOPNOLCF_o *__this,HIMHPFNABJN_o *HJEBKCDDBAB,MethodInfo *method)

{
  System_Type_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_0456713a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_Add__);
    DAT_0456713a = 1;
  }
  if (HJEBKCDDBAB != (HIMHPFNABJN_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).NOPAPOLFKLJ;
    key = System_Object__GetType((Il2CppObject *)HJEBKCDDBAB,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,(Il2CppObject *)key,(Il2CppObject *)HJEBKCDDBAB,
                 Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

