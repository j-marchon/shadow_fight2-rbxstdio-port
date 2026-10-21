// FCJBEKHDLAF$$FPBGLCDHHFH @ RVA 0x33F0000

void FCJBEKHDLAF__FPBGLCDHHFH
               (FCJBEKHDLAF_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,int32_t OEAIKLMHGOO,
               int32_t FLHLGFGJDMH,float NJBICBHLOMO,MethodInfo *method)

{
  int32_t NJBICBHLOMO_00;
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567eff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eff = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
      NJBICBHLOMO_00 = -0x80000000;
      if (NJBICBHLOMO != INFINITY) {
        NJBICBHLOMO_00 = (int)NJBICBHLOMO;
      }
      Nekki_SF2_GUI_Fight_PreFight__CreatePointsTable
                (pNVar2,OAGELANKMBH,IOJNHKIPJOK,NJBICBHLOMO_00,OEAIKLMHGOO,FLHLGFGJDMH,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

