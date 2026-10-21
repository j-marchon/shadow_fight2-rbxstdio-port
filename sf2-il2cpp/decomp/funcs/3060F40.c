// ACHLOMELAJE.MDHCBOFHAEL$$LFENGGKOJDO @ RVA 0x3060F40

void ACHLOMELAJE_MDHCBOFHAEL__LFENGGKOJDO
               (ACHLOMELAJE_MDHCBOFHAEL_o *__this,OLKPEJMEBPJ_o *BANHBMINMMP,MethodInfo *method)

{
  OLKPEJMEBPJ_o *pOVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *pSVar3;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565f0e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Add__);
    FUN_01bab630(&StringLiteral_3427);
    DAT_04565f0e = 1;
  }
  if (BANHBMINMMP != (OLKPEJMEBPJ_o *)0x0) {
    pOVar1 = ACHLOMELAJE_MDHCBOFHAEL__KNMENIBLFGF(__this,(BANHBMINMMP->fields).BBELCDHPJIP,method);
    if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
      pDVar2 = (BANHBMINMMP->fields).BBELCDHPJIP;
      if (pDVar2 == (DNELIPCHKLK_o *)0x0) goto LAB_03161040;
      pSVar3 = (System_String_o *)
               (*(pDVar2->klass->vtable)._3_ToString.methodPtr)
                         (pDVar2,(pDVar2->klass->vtable)._3_ToString.method);
      pSVar3 = System_String__Concat(StringLiteral_3427,pSVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    pDVar2 = (BANHBMINMMP->fields).BBELCDHPJIP;
    if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DEKLKEHGJEB;
      key = (Il2CppObject *)
            (*(pDVar2->klass->vtable)._3_ToString.methodPtr)
                      (pDVar2,(pDVar2->klass->vtable)._3_ToString.method);
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,key,(Il2CppObject *)BANHBMINMMP,
                   Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Add__);
        return;
      }
    }
  }
LAB_03161040:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

