// Nekki.SF2.GUI.Map.MoveableMapPanel$$FHEANCOCLEL @ RVA 0x3257070

float Nekki_SF2_GUI_Map_MoveableMapPanel__FHEANCOCLEL
                (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,float APINBNILPLA,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  if ((DAT_04567171 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567171 = 1;
    method = extraout_x1;
  }
  fVar1 = Nekki_SF2_GUI_Map_MoveableMapPanel__KILOIOEILFL(__this,method);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = (ABS(fVar1 - APINBNILPLA) / 1200.0) * 0.5;
  fVar1 = 0.0;
  if (0.05 < fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

