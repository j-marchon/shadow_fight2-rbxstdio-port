// TypeDefIndex 1212
// Namespace: Nekki.SF2.GUI.Dialogs
// public class SettingsCloudDialog : BaseDialog
// Fields:
//   private const int KCBDLECGOGG = 120;
//   public ResolutionButton BtnSave; // 0xC8
//   public ResolutionButton BtnLoad; // 0xD0

// ===== private void BBKLOEFMHLE()  [RVA 0x312DD58]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$BBKLOEFMHLE @ RVA 0x312DD58

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__BBKLOEFMHLE
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_045666a4 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045666a4 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== public void .ctor()  [RVA 0x312DDC8]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$.ctor @ RVA 0x312DDC8

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog___ctor
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OENBNJFBLEE()  [RVA 0x312DDD0]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$OENBNJFBLEE @ RVA 0x312DDD0

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__OENBNJFBLEE
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  System_Delegate_o *pSVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  System_Action_string__o *pSVar3;
  System_Action_string__o **ppSVar4;
  System_Action_string__c *pSVar5;
  
  if ((DAT_045666a5 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_HGKMIBMBLLG__);
    DAT_045666a5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BtnSave;
  if (__this_00 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<string>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (pSVar3 == (System_Action_string__o *)0x0) goto LAB_0322dfe0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<string>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<string>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (pSVar3 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<string>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<string>_TypeInfo);
    if (lVar2 == 0) {
LAB_0322dfe0:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB__JPNONJJNIFE(false,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x312DFE8]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$Init @ RVA 0x312DFE8

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__Init
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  if ((DAT_045666a6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11957/*"Settings_Cloud"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0322e034 to 0332e183 has its CatchHandler @ 0322e034
                       catch() { ... } // from try @ 0322e034 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e1d8 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e248 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e274 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e34c with catch @ 0322e034
                       catch() { ... } // from try @ 0322e37c with catch @ 0322e034
                       catch() { ... } // from try @ 0322e3a4 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e3d4 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e410 with catch @ 0322e034
                       catch() { ... } // from try @ 0322e42c with catch @ 0322e034
                       catch() { ... } // from try @ 0322e45c with catch @ 0322e034 */
    FUN_01bab630(&StringLiteral_11956/*"Settings_Back"*/);
    DAT_045666a6 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_11957/*"Settings_Cloud"*/,StringLiteral_1/*""*/,
             StringLiteral_11956/*"Settings_Back"*/,0,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x312E070]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$GKPJMHOFIOO @ RVA 0x312E070

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_045666a7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_GOEMGHIJHMB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_OENBNJFBLEE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9091/*"MiscSprites.load_active"*/);
    FUN_01bab630(&StringLiteral_9097/*"MiscSprites.save_active"*/);
    FUN_01bab630(&StringLiteral_9090/*"MiscSprites.load"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_9096/*"MiscSprites.save"*/);
    DAT_045666a7 = 1;
  }
  pNVar1 = (__this->fields).BtnSave;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_9096/*"MiscSprites.save"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).BtnSave;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_9097/*"MiscSprites.save_active"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).BtnSave;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0322e184 to 0332e18b has its CatchHandler @ 0322e254 */
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).BtnLoad;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e198 to 0332e1a7 has its CatchHandler @ 0322e24c */
            Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                      (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_9090/*"MiscSprites.load"*/,(MethodInfo *)0x0);
                    /* try { // try from 0322e1a8 to 0332e1af has its CatchHandler @ 0322e250 */
            pNVar1 = (__this->fields).BtnLoad;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e1b0 to 0332e1d7 has its CatchHandler @ 0322e258 */
              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                        (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_9091/*"MiscSprites.load_active"*/,(MethodInfo *)0x0);
              pNVar1 = (__this->fields).BtnLoad;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e1d8 to 0332e213 has its CatchHandler @ 0322e034 */
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0322e214 to 0332e21b has its CatchHandler @ 0322e3b8 */
                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HGKMIBMBLLG(string NONPLOOOOAG)  [RVA 0x312E21C]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$HGKMIBMBLLG @ RVA 0x312E21C

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__HGKMIBMBLLG
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  byte bVar1;
  System_Action_string__c *pSVar2;
  bool bVar3;
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  System_Delegate_o *pSVar4;
  long lVar5;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this_01;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *pSVar7;
  
                    /* try { // try from 0322e234 to 0332e23b has its CatchHandler @ 0322e3b0 */
                    /* try { // try from 0322e240 to 0332e243 has its CatchHandler @ 0322e3b4 */
                    /* try { // try from 0322e244 to 0332e247 has its CatchHandler @ 0322e248 */
  if ((DAT_045666a8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0322e244 with catch @ 0322e248
                       try { // try from 0322e248 to 0332e26f has its CatchHandler @ 0322e034 */
                    /* catch() { ... } // from try @ 0322e198 with catch @ 0322e24c */
                    /* catch() { ... } // from try @ 0322e1a8 with catch @ 0322e250 */
    FUN_01bab630(&System_Action<string>_TypeInfo);
                    /* catch() { ... } // from try @ 0322e184 with catch @ 0322e254 */
                    /* catch() { ... } // from try @ 0322e1b0 with catch @ 0322e258 */
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0322e270 to 0332e273 has its CatchHandler @ 0322e388 */
                    /* try { // try from 0322e274 to 0332e2f7 has its CatchHandler @ 0322e034 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_HGKMIBMBLLG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_11952/*"SettingsCloud_SaveComplete_Text{"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11953/*"SettingsCloud_SaveComplete_Title"*/);
    FUN_01bab630(&StringLiteral_11956/*"Settings_Back"*/);
    DAT_045666a8 = 1;
  }
  __this_00 = (__this->fields).BtnSave;
  if (__this_00 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0322e4cc;
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 0322e2f8 to 0332e2ff has its CatchHandler @ 0322e3ac */
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0322e30c to 0332e317 has its CatchHandler @ 0322e3a8 */
  pSVar7 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar4 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
                    /* try { // try from 0322e318 to 0332e34b has its CatchHandler @ 0322e410 */
  System_Action<object>___ctor();
  pSVar4 = System_Delegate__Remove((System_Delegate_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  pSVar2 = System_Action<string>_TypeInfo;
  if (pSVar4 == (System_Delegate_o *)0x0) {
                    /* try { // try from 0322e37c to 0332e38f has its CatchHandler @ 0322e034 */
    lVar5 = 0;
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
                    /* catch() { ... } // from try @ 0322e270 with catch @ 0322e388 */
    *ppSVar6 = (System_Action_string__o *)0x0;
  }
  else {
                    /* try { // try from 0322e34c to 0332e377 has its CatchHandler @ 0322e034 */
    pSVar7 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar4,System_Action<string>_TypeInfo);
    if (pSVar7 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar4,pSVar2);
    }
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar6 = pSVar7;
    pSVar2 = System_Action<string>_TypeInfo;
    lVar5 = thunk_FUN_01bda71c(pSVar4,System_Action<string>_TypeInfo);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar4,pSVar2);
    }
  }
                    /* try { // try from 0322e390 to 0332e3a3 has its CatchHandler @ 0322e470 */
                    /* catch() { ... } // from try @ 0322e378 with catch @ 0322e3a4
                       try { // try from 0322e3a4 to 0332e3cf has its CatchHandler @ 0322e034 */
                    /* catch() { ... } // from try @ 0322e30c with catch @ 0322e3a8 */
                    /* catch() { ... } // from try @ 0322e2f8 with catch @ 0322e3ac */
                    /* catch() { ... } // from try @ 0322e234 with catch @ 0322e3b0 */
                    /* catch() { ... } // from try @ 0322e240 with catch @ 0322e3b4 */
                    /* catch() { ... } // from try @ 0322e214 with catch @ 0322e3b8 */
  thunk_FUN_01c20e04(ppSVar6,lVar5);
                    /* try { // try from 0322e3d0 to 0332e3d3 has its CatchHandler @ 0322e3f4 */
                    /* try { // try from 0322e3d4 to 0332e3fb has its CatchHandler @ 0322e034 */
  EHNFGMGKCHO = System_String__Concat
                          (StringLiteral_11952/*"SettingsCloud_SaveComplete_Text{"*/,NONPLOOOOAG,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0322e3d0 with catch @ 0322e3f4 */
                    /* try { // try from 0322e3fc to 0332e40f has its CatchHandler @ 0322e470 */
                    /* catch() { ... } // from try @ 0322e318 with catch @ 0322e410
                       try { // try from 0322e410 to 0332e427 has its CatchHandler @ 0322e034 */
  __this_01 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)
              JJPNLEPEAFM__JNDPLPKDPCP
                        (StringLiteral_11953/*"SettingsCloud_SaveComplete_Title"*/,EHNFGMGKCHO,StringLiteral_1/*""*/,StringLiteral_11956/*"Settings_Back"*/,
                         (System_Action_object__o *)0x0,1,1,false,false,StringLiteral_1/*""*/,true,true,
                         true,true,(MethodInfo *)0x0);
  if (__this_01 == (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
LAB_0322e444:
    __this_01 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
  }
  else {
                    /* try { // try from 0322e428 to 0332e42b has its CatchHandler @ 0322e44c */
                    /* try { // try from 0322e42c to 0332e453 has its CatchHandler @ 0322e034 */
    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar1) goto LAB_0322e444;
                    /* catch() { ... } // from try @ 0322e428 with catch @ 0322e44c */
                    /* try { // try from 0322e454 to 0332e45b has its CatchHandler @ 0322e470 */
                    /* try { // try from 0322e45c to 0332e467 has its CatchHandler @ 0322e034 */
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo) {
      __this_01 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
    }
  }
                    /* try { // try from 0322e468 to 0332e46f has its CatchHandler @ 0322e470 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0322e390 with catch @ 0322e470
                       catch() { ... } // from try @ 0322e3fc with catch @ 0322e470
                       catch() { ... } // from try @ 0322e454 with catch @ 0322e470
                       catch() { ... } // from try @ 0322e468 with catch @ 0322e470 */
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar3) {
    return;
  }
  if (__this_01 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_SimpleDialog__SetContentTextFontSize(__this_01,0x78,(MethodInfo *)0x0);
    return;
  }
LAB_0322e4cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x312E4E8]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$LCGFJKFJKJK @ RVA 0x312E4E8

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_045666a9 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_BBKLOEFMHLE__,DNBBBGEENMM);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666a9 = 1;
  }
  pLVar1 = (__this->fields).super._btnCancel;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (__this_00 = (pLVar1->fields).super.super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super._btnCancel;
    if (pLVar1 != (LabelButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GOEMGHIJHMB()  [RVA 0x312E590]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$GOEMGHIJHMB @ RVA 0x312E590

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__GOEMGHIJHMB
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Action_o *AFOFPOOEFHF;
  
  if ((DAT_045666aa & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_PAPADHCFIBN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo);
    DAT_045666aa = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  AFOFPOOEFHF = Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->static_fields->__9__8_0;
  if (AFOFPOOEFHF == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo,method);
    }
    AFOFPOOEFHF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = AFOFPOOEFHF;
    thunk_FUN_01c20e04(ppSVar1,AFOFPOOEFHF);
    method = extraout_x1_01;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  LHKALFIIJKB__KNNAJOALOGD(AFOFPOOEFHF,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x312E690]
// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$OnDestroy @ RVA 0x312E690

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  MethodInfo *extraout_x1;
  System_Action_string__o *pSVar4;
  System_Action_string__o **ppSVar5;
  
  if ((DAT_045666ab & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_HGKMIBMBLLG__);
    DAT_045666ab = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar4 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar4,pSVar2,(MethodInfo *)0x0);
  pSVar1 = System_Action<string>_TypeInfo;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar3 = 0;
    ppSVar5 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar5 = (System_Action_string__o *)0x0;
  }
  else {
    pSVar4 = (System_Action_string__o *)thunk_FUN_01bda71c(pSVar2,System_Action<string>_TypeInfo);
    if (pSVar4 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
    ppSVar5 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    *ppSVar5 = pSVar4;
    pSVar1 = System_Action<string>_TypeInfo;
    lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<string>_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  thunk_FUN_01c20e04(ppSVar5,lVar3);
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

