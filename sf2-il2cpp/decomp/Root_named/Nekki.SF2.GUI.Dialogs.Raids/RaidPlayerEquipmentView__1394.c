// TypeDefIndex 1394
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidPlayerEquipmentView : RaidPlayerInfoView
// Fields:
//   private const string EDDLPPDEHDM = "raidInfoEquipment";
//   private RaidPlayerEquipmentImage _armorImg; // 0x30
//   private RaidPlayerEquipmentImage _helmImg; // 0x38
//   private RaidPlayerEquipmentImage _weaponImg; // 0x40
//   private RaidPlayerEquipmentImage _rangedImg; // 0x48
//   private RaidPlayerEquipmentImage _magicImg; // 0x50
//   private LabelAlias _header; // 0x58

// ===== public override void Init(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x31775E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerEquipmentView$$Init @ RVA 0x31775E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  BHEDGAKGKPO_StaticFields *pBVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_0456695c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_20389/*"raidInfoEquipment"*/);
    DAT_0456695c = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
  pNVar2 = (__this->fields)._header;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar1 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
              ((pBVar1->FHIAKPJBBCB).fields.r,(pBVar1->FHIAKPJBBCB).fields.g,
               (pBVar1->FHIAKPJBBCB).fields.b,(pBVar1->FHIAKPJBBCB).fields.a,pNVar2,
               (pNVar2->klass->vtable)._23_set_color.method);
    pNVar2 = (__this->fields)._header;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_20389/*"raidInfoEquipment"*/,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x31776AC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerEquipmentView$$UpdateContent @ RVA 0x31776AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  RaidPlayerEquipmentImage_o *pRVar2;
  
  if ((DAT_0456695d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ModelParameters_TypeInfo);
    FUN_01bab630(&StringLiteral_3839/*"Can't process model paraments"*/);
    DAT_0456695d = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (ModelParameters_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)ModelParameters_TypeInfo)) {
      pRVar2 = (__this->fields)._armorImg;
      if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
        RaidPlayerEquipmentImage__Refresh(pRVar2,IMMNELPBGIF[0xc].monitor,(MethodInfo *)0x0);
        pRVar2 = (__this->fields)._helmImg;
        if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
          RaidPlayerEquipmentImage__Refresh
                    (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xd].klass,(MethodInfo *)0x0);
          pRVar2 = (__this->fields)._weaponImg;
          if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
            RaidPlayerEquipmentImage__Refresh
                      (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xc].klass,(MethodInfo *)0x0);
            pRVar2 = (__this->fields)._rangedImg;
            if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
              RaidPlayerEquipmentImage__Refresh(pRVar2,IMMNELPBGIF[0xd].monitor,(MethodInfo *)0x0);
              pRVar2 = (__this->fields)._magicImg;
              if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
                RaidPlayerEquipmentImage__Refresh
                          (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xe].klass,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_3839/*"Can't process model paraments"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31777D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerEquipmentView$$.ctor @ RVA 0x31777D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView_o *)__this,(MethodInfo *)0x0);
  return;
}

