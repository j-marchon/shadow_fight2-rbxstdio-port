// TypeDefIndex 1767
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinOldLeaderBoard : SeasFinBaseContent
// Fields:
//   private LabelAlias _oldLeaderboard; // 0x40

// ===== protected override void OnDestroy()  [RVA 0x31E9980]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinOldLeaderBoard$$OnDestroy @ RVA 0x31E9980

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31E9988]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinOldLeaderBoard$$.ctor @ RVA 0x31E9988

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void ICGMFEPOOEE(object IMMNELPBGIF)  [RVA 0x31E9990]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinOldLeaderBoard$$ICGMFEPOOEE @ RVA 0x31E9990

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard__ICGMFEPOOEE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x032e9998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_OJGLIBHMOIE.methodPtr)
            (__this,(__this->klass->vtable)._5_OJGLIBHMOIE.method);
  return;
}


// ===== public void Init()  [RVA 0x31E999C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinOldLeaderBoard$$Init @ RVA 0x31E999C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this_00;
  System_Action_T__o *IELDNEAAPBE;
  BHEDGAKGKPO_StaticFields *pBVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04566d85 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_ICGMFEPOOEE__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_9823/*"Old Leader Board"*/);
    DAT_04566d85 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,false,1,StringLiteral_9679/*"OK"*/,
             false,1,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *)
              JJPNLEPEAFM__FNJFGJPELJK((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *)0x0) goto LAB_032e9b9c;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__SwitchToPreviousLeaderboard
              (__this_00,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._oldLeaderboard;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
               (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    pNVar4 = (__this->fields)._oldLeaderboard;
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e9b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,StringLiteral_9823/*"Old Leader Board"*/,(pNVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_032e9b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

