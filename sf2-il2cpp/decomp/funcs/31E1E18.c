// GBAAAJLKFDA$$KNMENIBLFGF @ RVA 0x31E1E18

void GBAAAJLKFDA__KNMENIBLFGF(GBAAAJLKFDA_o *__this,OJJLPLHNGBP_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  GBAAAJLKFDA_MHBELAIPHEK_o *__this_00;
  GBAAAJLKFDA_o **ppGVar2;
  System_Collections_Generic_List_ValueTuple_int__string___o *pSVar3;
  EGPGCNBJPEH_o *__this_01;
  System_Collections_Generic_List_ValueTuple_int__string___o **ppSVar4;
  OJJLPLHNGBP_o **ppOVar5;
  
  if ((DAT_04566d48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&GBAAAJLKFDA_MHBELAIPHEK_TypeInfo);
    DAT_04566d48 = 1;
  }
  __this_00 = (GBAAAJLKFDA_MHBELAIPHEK_o *)thunk_FUN_01bda818(GBAAAJLKFDA_MHBELAIPHEK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GBAAAJLKFDA_MHBELAIPHEK_o *)0x0) {
    ppGVar2 = &(__this_00->fields).__4__this;
    *ppGVar2 = __this;
    thunk_FUN_01c20e04(ppGVar2,__this);
    ppOVar5 = &(__this_00->fields).parameters;
    *ppOVar5 = OKBIKHHKOEN;
    thunk_FUN_01c20e04(ppOVar5,OKBIKHHKOEN);
    if (*ppOVar5 != (OJJLPLHNGBP_o *)0x0) {
      pSVar3 = GBAAAJLKFDA__KCEBKFGFKIF(__this,((*ppOVar5)->fields).super.PHONOLEMBHN,method);
      ppSVar4 = &(__this_00->fields).zones;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      pSVar3 = *ppSVar4;
      if (pSVar3 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
        if ((pSVar3->fields)._size != 0) {
          iVar1 = GBAAAJLKFDA__EICHAFPOAJF(__this,pSVar3,method);
          (__this_00->fields).startIndex = iVar1;
          GBAAAJLKFDA_MHBELAIPHEK__GPFEGDLLACA(__this_00,0,method);
          return;
        }
        __this_01 = (__this->fields).HMAMEMNGEPE;
        if (__this_01 != (EGPGCNBJPEH_o *)0x0) {
          EGPGCNBJPEH__KNMENIBLFGF(__this_01,*ppOVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

