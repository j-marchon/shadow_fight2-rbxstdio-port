// Nekki.SF2.GUI.Pvp.SelectModule$$OGLMEBIKJLP @ RVA 0x3177838

void Nekki_SF2_GUI_Pvp_SelectModule__OGLMEBIKJLP
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,int32_t MKACJBMOMHC,
               int32_t JJBKAMIAMNE,MethodInfo *method)

{
  MGNDHCBAPEN_int__int__o *pMVar1;
  
  if (HEHMPFLAEGE == 0) {
    pMVar1 = (__this->fields).LAAFICOIGGA;
  }
  else {
    pMVar1 = (__this->fields).JGLNHNCBFOD;
  }
  if (pMVar1 != (MGNDHCBAPEN_int__int__o *)0x0) {
    (pMVar1->fields).PHPELPFMOII = (pMVar1->fields).PHPELPFMOII + MKACJBMOMHC;
    (pMVar1->fields).DOKHHBGJICA = (pMVar1->fields).DOKHHBGJICA + JJBKAMIAMNE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

