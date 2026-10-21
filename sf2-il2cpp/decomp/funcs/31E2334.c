// GBAAAJLKFDA$$ILGCEJBAOHG @ RVA 0x31E2334

void GBAAAJLKFDA__ILGCEJBAOHG(GBAAAJLKFDA_o *__this,BKMILGLGFCM_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  GBAAAJLKFDA_NPHBGNFGBKL_o *__this_00;
  GBAAAJLKFDA_o **ppGVar2;
  System_Collections_Generic_List_ValueTuple_int__string___o *pSVar3;
  EGPGCNBJPEH_o *__this_01;
  System_Collections_Generic_List_ValueTuple_int__string___o **ppSVar4;
  BKMILGLGFCM_o **ppBVar5;
  
  if ((DAT_04566d4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&GBAAAJLKFDA_NPHBGNFGBKL_TypeInfo);
    DAT_04566d4a = 1;
  }
  __this_00 = (GBAAAJLKFDA_NPHBGNFGBKL_o *)thunk_FUN_01bda818(GBAAAJLKFDA_NPHBGNFGBKL_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) {
    ppGVar2 = &(__this_00->fields).__4__this;
    *ppGVar2 = __this;
    thunk_FUN_01c20e04(ppGVar2,__this);
    ppBVar5 = &(__this_00->fields).parameters;
    *ppBVar5 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppBVar5,OKBIKHHKOEN);
    if (*ppBVar5 != (BKMILGLGFCM_o *)0x0) {
      pSVar3 = GBAAAJLKFDA__KCEBKFGFKIF(__this,((*ppBVar5)->fields).super.PHONOLEMBHN,method);
      ppSVar4 = &(__this_00->fields).zones;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      pSVar3 = *ppSVar4;
      if (pSVar3 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
        if ((pSVar3->fields)._size != 0) {
          iVar1 = GBAAAJLKFDA__EICHAFPOAJF(__this,pSVar3,method);
          (__this_00->fields).startIndex = iVar1;
          GBAAAJLKFDA_NPHBGNFGBKL__CFKEANHONJK(__this_00,0,method);
          return;
        }
        __this_01 = (__this->fields).HMAMEMNGEPE;
        if (__this_01 != (EGPGCNBJPEH_o *)0x0) {
          EGPGCNBJPEH__ILGCEJBAOHG(__this_01,*ppBVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

