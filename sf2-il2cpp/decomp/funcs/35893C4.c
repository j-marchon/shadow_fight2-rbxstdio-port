// Nekki.SF2.GUI.Map.MapScene$$ActiveBattleByFightIDS @ RVA 0x35893C4

void Nekki_SF2_GUI_Map_MapScene__ActiveBattleByFightIDS
               (Nekki_SF2_GUI_Map_MapScene_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,bool MJDICHGKPGE,
               bool DKEIBNDDFOM,bool NLBIOFGMMOO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MJDICHGKPGE;
  if ((DAT_04568d1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1e = 1;
  }
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    __this_00 = Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE
                          (__this,(DBIAAJNKHLH->fields).GDPFBDIJNHA,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__ActiveBattle
                (__this_00,(DBIAAJNKHLH->fields).GJFJPLHCBKJ,MJDICHGKPGE,DKEIBNDDFOM,NLBIOFGMMOO,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

