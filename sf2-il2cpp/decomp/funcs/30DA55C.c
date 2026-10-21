// Nekki.SF2.GUI.TableView$$FindIndexOfRowAtPosition @ RVA 0x30DA55C

int32_t Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition
                  (Nekki_SF2_GUI_TableView_o *__this,float BLEOKMIDGIK,int32_t KBAJGAHMEAF,
                  int32_t HLBLCOAJBLM,MethodInfo *method)

{
  int iVar1;
  uint JDEFJPHCNMM;
  MethodInfo *method_00;
  uint JDEFJPHCNMM_00;
  float fVar3;
  float fVar4;
  MethodInfo *pMVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)HLBLCOAJBLM;
  pMVar2 = method_00;
  if (KBAJGAHMEAF < HLBLCOAJBLM) {
    do {
      JDEFJPHCNMM_00 = (uint)pMVar2;
      if (JDEFJPHCNMM_00 - KBAJGAHMEAF == 1) {
        fVar3 = Nekki_SF2_GUI_TableView__PositionForRow(__this,KBAJGAHMEAF,method_00);
        fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM_00,method_00);
        if (ABS(BLEOKMIDGIK - fVar4) < ABS(BLEOKMIDGIK - fVar3)) {
          return JDEFJPHCNMM_00;
        }
        return KBAJGAHMEAF;
      }
      iVar1 = JDEFJPHCNMM_00 + KBAJGAHMEAF;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      JDEFJPHCNMM = iVar1 >> 1;
      fVar3 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
      if (BLEOKMIDGIK <= fVar3) {
        JDEFJPHCNMM_00 = JDEFJPHCNMM;
        JDEFJPHCNMM = KBAJGAHMEAF;
      }
      KBAJGAHMEAF = JDEFJPHCNMM;
      pMVar2 = (MethodInfo *)(ulong)JDEFJPHCNMM_00;
    } while (KBAJGAHMEAF < (int)JDEFJPHCNMM_00);
  }
  return KBAJGAHMEAF;
}

