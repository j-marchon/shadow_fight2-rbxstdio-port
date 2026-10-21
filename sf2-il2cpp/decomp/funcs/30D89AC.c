// Nekki.SF2.GUI.TableView$$PositionForRow @ RVA 0x30D89AC

float Nekki_SF2_GUI_TableView__PositionForRow
                (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  int32_t iVar1;
  KMAKOOHEKNB_o *pKVar2;
  float fVar3;
  float fVar4;
  
  if ((-1 < JDEFJPHCNMM) &&
     (iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,(MethodInfo *)(ulong)(uint)JDEFJPHCNMM),
     JDEFJPHCNMM <= iVar1 + -1)) {
    pKVar2 = (__this->fields).HCLHHHKCABP;
    if (pKVar2 != (KMAKOOHEKNB_o *)0x0) {
      fVar3 = KMAKOOHEKNB__GOFGJILDJLA(pKVar2,JDEFJPHCNMM,(MethodInfo *)0x0);
      pKVar2 = (__this->fields).HCLHHHKCABP;
      if (pKVar2 != (KMAKOOHEKNB_o *)0x0) {
        fVar4 = KMAKOOHEKNB__HGJGLBLDDHF(pKVar2,JDEFJPHCNMM,(MethodInfo *)0x0);
        return (__this->fields).MENMAPNCLAH + fVar3 + fVar4 * -0.5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}

