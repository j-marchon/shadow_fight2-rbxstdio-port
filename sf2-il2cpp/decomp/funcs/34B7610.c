// BCKMMEIIKPH$$GIENGNEGHPJ @ RVA 0x34B7610

void BCKMMEIIKPH__GIENGNEGHPJ(BCKMMEIIKPH_o *__this,FDGBFCHBBLM_o *PPFHAEOGOJE,MethodInfo *method)

{
  FDGBFCHBBLM_o **ppFVar1;
  System_String_o *EIJDDKJONFO;
  Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *pNVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_0456859d & 1) == 0) {
    FUN_01bab630(&Method_OLAKAAKGDBA_BOEDMIFBHFI<LoaderConfig>__);
    DAT_0456859d = 1;
  }
  if ((__this->fields).JOBALMMDPAF == false) {
    ppFVar1 = &(__this->fields).KCLBDMDFGFH;
    *ppFVar1 = PPFHAEOGOJE;
    (__this->fields).JOBALMMDPAF = true;
    auVar3 = thunk_FUN_01c20e04(ppFVar1,PPFHAEOGOJE);
    EIJDDKJONFO = BCKMMEIIKPH__IGLJHPABLJP(auVar3._0_8_,auVar3._8_8_);
    pNVar2 = (Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *)
             OLAKAAKGDBA__BOEDMIFBHFI<object>
                       (EIJDDKJONFO,1,true,false,Method_OLAKAAKGDBA_BOEDMIFBHFI<LoaderConfig>__);
    (__this->fields).KJBGNOCGGHF = pNVar2;
    thunk_FUN_01c20e04();
  }
  return;
}

