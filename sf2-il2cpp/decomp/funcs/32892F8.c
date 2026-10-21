// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PurchasePacks @ RVA 0x32892F8

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PurchasePacks
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,System_String_o *DFNCDFFEOFM,
               int32_t IDPMJOKDHNP,MethodInfo *method)

{
  BMBFOPNOLCF_o **ppBVar1;
  int32_t length;
  BMBFOPNOLCF_o *pBVar2;
  GCOLFANNEMF_o *__this_00;
  IKGPGAPFKNE_o *__this_01;
  System_Action_o *KBJBLFOHFDH;
  MCLOEMMHNIA_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *pSVar3;
  
  if ((DAT_045672d2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BMBFOPNOLCF_KJKDAHGENPM<GCOLFANNEMF>__);
    FUN_01bab630(&BMBFOPNOLCF_TypeInfo);
    FUN_01bab630(&GCOLFANNEMF_TypeInfo);
    FUN_01bab630(&IKGPGAPFKNE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_Clear__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_OLCLFOHGKIL__);
    FUN_01bab630(&MCLOEMMHNIA_TypeInfo);
    DAT_045672d2 = 1;
  }
  pSVar3 = (__this->fields).FCKCGNHILFE;
  if (pSVar3 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pBVar2 = (BMBFOPNOLCF_o *)thunk_FUN_01bda818(BMBFOPNOLCF_TypeInfo);
    BMBFOPNOLCF___ctor(pBVar2,(MethodInfo *)0x0);
    ppBVar1 = &(__this->fields).JJLEJEOELEB;
    (__this->fields).JJLEJEOELEB = pBVar2;
    thunk_FUN_01c20e04(ppBVar1,pBVar2);
    pSVar3 = (__this->fields).FCKCGNHILFE;
    pBVar2 = (__this->fields).JJLEJEOELEB;
    __this_00 = (GCOLFANNEMF_o *)thunk_FUN_01bda818(GCOLFANNEMF_TypeInfo);
    GCOLFANNEMF___ctor(__this_00,IDPMJOKDHNP,pSVar3,(MethodInfo *)0x0);
    if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
      BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_00,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).FCKCGNHILFE;
      pBVar2 = (__this->fields).JJLEJEOELEB;
      __this_01 = (IKGPGAPFKNE_o *)thunk_FUN_01bda818(IKGPGAPFKNE_TypeInfo);
      IKGPGAPFKNE___ctor(__this_01,DFNCDFFEOFM,pSVar3,(MethodInfo *)0x0);
      if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
        BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_01,(MethodInfo *)0x0);
        pBVar2 = (__this->fields).JJLEJEOELEB;
        KBJBLFOHFDH = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        __this_02 = (MCLOEMMHNIA_o *)thunk_FUN_01bda818(MCLOEMMHNIA_TypeInfo);
        MCLOEMMHNIA___ctor(__this_02,KBJBLFOHFDH,(MethodInfo *)0x0);
        if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
          BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_02,(MethodInfo *)0x0);
          pBVar2 = *ppBVar1;
          if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
            BMBFOPNOLCF__KJKDAHGENPM<object>(pBVar2,Method_BMBFOPNOLCF_KJKDAHGENPM<GCOLFANNEMF>__);
            Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

