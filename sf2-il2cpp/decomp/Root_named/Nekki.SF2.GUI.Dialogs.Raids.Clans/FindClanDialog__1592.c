// TypeDefIndex 1592
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class FindClanDialog : RaidBaseDialog
// Fields:
//   private LabelButton _createButton; // 0xC8
//   private LabelButton _cancelButton; // 0xD0
//   private FindClanWidget _findClanWidgetPrefab; // 0xD8
//   private FindClanWidget OFPMMKBLEGH; // 0xE0

// ===== protected override void IGDDKJJMDLP()  [RVA 0x31B43B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$IGDDKJJMDLP @ RVA 0x31B43B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x31B43BC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$LCGFJKFJKJK @ RVA 0x31B43BC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x31B43C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$Init @ RVA 0x31B43C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  if ((DAT_04566b9d & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_4853/*"CreateBtn"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b9d = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super._btnOK;
  if (__this_00 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b4458 to 033b44fb has its CatchHandler @ 032b4458
                       catch() { ... } // from try @ 032b4458 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4514 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4558 with catch @ 032b4458
                       catch() { ... } // from try @ 032b4588 with catch @ 032b4458 */
    LabelButton__set_Alias(__this_00,StringLiteral_4853/*"CreateBtn"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void ACICKHKFILK(LabelButton LGHOMHOPNEP, BaseDialog.OFBBBIDKKOD JFLAKNAGBEL)  [RVA 0x31B4474]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$ACICKHKFILK @ RVA 0x31B4474

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,
               LabelButton_o *LGHOMHOPNEP,int32_t JFLAKNAGBEL,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  
  if ((DAT_04566b9e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b9e = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__ACICKHKFILK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,LGHOMHOPNEP,JFLAKNAGBEL,(MethodInfo *)0x0)
  ;
  pLVar2 = (__this->fields)._createButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)pLVar2,
                     (MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._createButton;
    if (pLVar2 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b44fc to 033b4503 has its CatchHandler @ 032b453c */
                    /* try { // try from 032b450c to 033b4513 has its CatchHandler @ 032b4538 */
      LabelButton__set_ButtonColor(pLVar2,2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032b4514 to 033b4553 has its CatchHandler @ 032b4458 */
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x31B4524]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$EJHAPHAHMHG @ RVA 0x31B4524

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x31B4528]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$GKPJMHOFIOO @ RVA 0x31B4528

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__CFPJAFNAAME(__this,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b450c with catch @ 032b4538
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b44fc with catch @ 032b453c
                        */
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__HCOPLDHOCBA(__this,method_00);
  return;
}


// ===== private void CFPJAFNAAME()  [RVA 0x31B4540]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$CFPJAFNAAME @ RVA 0x31B4540

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 032b4554 to 033b4557 has its CatchHandler @ 032b4578 */
                    /* try { // try from 032b4558 to 033b457f has its CatchHandler @ 032b4458 */
  if ((DAT_04566b9f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_PGPALEGOKKA__);
                    /* catch() { ... } // from try @ 032b4554 with catch @ 032b4578 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b4580 to 033b4587 has its CatchHandler @ 032b459c */
    DAT_04566b9f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032b4588 to 033b4593 has its CatchHandler @ 032b4458 */
  pLVar1 = (__this->fields)._createButton;
  if (pLVar1 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b4594 to 033b459b has its CatchHandler @ 032b459c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b4580 with catch @ 032b459c
                       catch(type#2 @ 00000000) { ... } // from try @ 032b4594 with catch @ 032b459c
                        */
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._cancelButton;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar1,2,IELDNEAAPBE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HCOPLDHOCBA()  [RVA 0x31B4628]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$HCOPLDHOCBA @ RVA 0x31B4628

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__HCOPLDHOCBA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o **ppNVar2;
  
  if ((DAT_04566ba0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ba0 = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields)._findClanWidgetPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pNVar1,
                         Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)
             UnityEngine_Component__GetComponent<object>
                       (__this_00,Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
    ppNVar2 = &(__this->fields).OFPMMKBLEGH;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__Init(*ppNVar2,(MethodInfo *)0x0);
      if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
        __this_02 = (__this->fields).super.super._content;
        if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__SearchRecommended
                      (*ppNVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PGPALEGOKKA()  [RVA 0x31B4730]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$PGPALEGOKKA @ RVA 0x31B4730

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__PGPALEGOKKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  DialogsOpener__HOILBJHCLJG((MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31B4738]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$.ctor @ RVA 0x31B4738

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

