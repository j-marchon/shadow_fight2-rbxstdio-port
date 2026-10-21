// Nekki.SF2.GUI.Fight.ViewerFight$$.ctor @ RVA 0x35BDD00

void Nekki_SF2_GUI_Fight_ViewerFight___ctor
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04568ef6 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    DAT_04568ef6 = 1;
  }
                    /* try { // try from 036bdd3c to 037bdd43 has its CatchHandler @ 036bddbc */
                    /* try { // try from 036bdd44 to 037bddaf has its CatchHandler @ 036bdc80 */
  (__this->fields).damageLabelStartY = 100.0;
  (__this->fields).damageLabelEndY = 450.0;
  (__this->fields).damageLabelMoveDuration = 3.0;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).GJOBKIBMLHC.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).MOBINBAJICJ.fields = CVar1;
  (__this->fields).KBFHMLONBPA = -1;
  (__this->fields).OEOFIEFPAFH.fields = (UnityEngine_Vector2_Fields)0x44110000442f0000;
  (__this->fields).BPMGLLAICKD.fields = (UnityEngine_Vector2_Fields)0x44110000c42f0000;
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}

