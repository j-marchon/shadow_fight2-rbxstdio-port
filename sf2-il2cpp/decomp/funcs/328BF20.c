// Nekki.SF2.GUI.Dialogs.LotteryDialog$$.cctor @ RVA 0x328BF20

void Nekki_SF2_GUI_Dialogs_LotteryDialog___cctor(MethodInfo *method)

{
  System_Int32_array *pSVar1;
  System_Int32_array **ppSVar2;
  
  if ((DAT_045672e0 & 1) == 0) {
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_703BE8CB5574D9E7B636FE613F3FB7E430E5F222DA765D863B9D5DB0A255DAD1
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_C0E0211B207A5474E25AC69B2D9096585F68A511C350A80A563ACD6B3E149322
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_EE3F1B56C7C842C14B392D38DC90896D29588E4A27E66FF9D2F167D2C09D5B51
                );
    DAT_045672e0 = 1;
  }
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_703BE8CB5574D9E7B636FE613F3FB7E430E5F222DA765D863B9D5DB0A255DAD1
             ,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->IJDEBLDLODL = pSVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_C0E0211B207A5474E25AC69B2D9096585F68A511C350A80A563ACD6B3E149322
             ,(MethodInfo *)0x0);
  ppSVar2 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->MPMNNILPAAE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_EE3F1B56C7C842C14B392D38DC90896D29588E4A27E66FF9D2F167D2C09D5B51
             ,(MethodInfo *)0x0);
  ppSVar2 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->EJKOCKOCCCI;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

