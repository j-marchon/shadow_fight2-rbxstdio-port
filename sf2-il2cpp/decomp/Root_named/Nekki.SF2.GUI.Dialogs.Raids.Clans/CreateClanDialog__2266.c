// TypeDefIndex 2266
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class CreateClanDialog : ClanBaseDialog
// Fields:
//   private const float AKOJCLKIFBI = 1.5;
//   private const float EMDJGELIKHO = 150;
//   private RectTransform _profileWidgetMount; // 0xC8
//   private GameObject _profileWidgetPrefab; // 0xD0
//   protected ClanProfileWidget BBKLDPELJHI; // 0xD8
//   protected BKKENCMPLLF FLLHHEODKPH; // 0xE0
//   private static string KGOBMNCADHH; // 0x0
//   private static EEHFEPPDBHL FIGLLHBDHCN; // 0x8
//   private ClanLogoImage NCEGFHDDGOO; // 0xE8
//   private SimpleDialog LBFACKCBBOD; // 0xF0

// ===== private void FNMNFEGFOEK()  [RVA 0x3300A50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FNMNFEGFOEK @ RVA 0x3300A50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FNMNFEGFOEK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  BKKENCMPLLF_o *__this_00;
  
  __this_00 = (__this->fields).FLLHHEODKPH;
  if ((__this_00 != (BKKENCMPLLF_o *)0x0) &&
     (pSVar1 = BKKENCMPLLF__MJBHKOJAFOH(__this_00,(MethodInfo *)0x0),
     pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__TrimEnd(pSVar1,(MethodInfo *)0x0);
    BKKENCMPLLF__BOENJKAFOEC(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual bool LLKLEHBDELH()  [RVA 0x3300A8C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$LLKLEHBDELH @ RVA 0x3300A8C

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__LLKLEHBDELH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  BKKENCMPLLF_o *pBVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *__this_00;
  int iVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Il2CppObject *pIStack_28;
  
                    /* try { // try from 03400a9c to 03500abf has its CatchHandler @ 03400c34 */
  if ((DAT_0456771b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_Dispose__
                );
                    /* try { // try from 03400ac4 to 03500ac7 has its CatchHandler @ 03400acc */
                    /* try { // try from 03400ac8 to 03500ae7 has its CatchHandler @ 03400728 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_MoveNext__
                );
                    /* catch() { ... } // from try @ 03400ac4 with catch @ 03400acc */
                    /* catch() { ... } // from try @ 03400a1c with catch @ 03400ad0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Value__
                );
                    /* try { // try from 03400ae8 to 03500aeb has its CatchHandler @ 03400bf8 */
    DAT_0456771b = 1;
  }
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  local_40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_28 = (Il2CppObject *)0x0;
  uStack_30 = (Il2CppObject *)0x0;
  pBVar3 = (__this->fields).FLLHHEODKPH;
  if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
    pNVar5 = (__this->fields).BBKLDPELJHI;
                    /* try { // try from 03400b04 to 03500b6b has its CatchHandler @ 03400c28 */
    iVar2 = BKKENCMPLLF__ODCJNJBFOLB(pBVar3,(MethodInfo *)0x0);
    if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                (pNVar5,1,iVar2,(MethodInfo *)0x0);
      pBVar3 = (__this->fields).FLLHHEODKPH;
      if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
        pNVar5 = (__this->fields).BBKLDPELJHI;
        iVar2 = BKKENCMPLLF__AFAFFPBDCHJ(pBVar3,(MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                    (pNVar5,2,iVar2,(MethodInfo *)0x0);
          pBVar3 = (__this->fields).FLLHHEODKPH;
          if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
            pNVar5 = (__this->fields).BBKLDPELJHI;
            iVar2 = BKKENCMPLLF__HOFBHBCLOEO(pBVar3,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                        (pNVar5,3,iVar2,(MethodInfo *)0x0);
              pNVar5 = (__this->fields).BBKLDPELJHI;
              if ((pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) &&
                 (__this_00 = (pNVar5->fields).LCJAAPPDFJJ,
                 __this_00 !=
                 (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)0x0)) {
                    /* try { // try from 03400b9c to 03500bbb has its CatchHandler @ 03400dac */
                System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__GetEnumerator
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                           &local_40,
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_GetEnumerator__
                          );
                do {
                  bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_Int32Enum>__MoveNext
                                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o
                                      *)&local_40,
                                     Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_MoveNext__
                                    );
                  if (!bVar1) {
                    /* try { // try from 03400bcc to 03500bcf has its CatchHandler @ 03400c44 */
                    iVar4 = 5;
                    goto LAB_03400bd0;
                  }
                    /* try { // try from 03400bbc to 03500bc3 has its CatchHandler @ 03400c50 */
                } while (uStack_30._4_4_ == 0);
                    /* try { // try from 03400bc4 to 03500bcb has its CatchHandler @ 03400c4c */
                iVar4 = 4;
LAB_03400bd0:
                    /* try { // try from 03400bd0 to 03500bd3 has its CatchHandler @ 03400c40 */
                    /* try { // try from 03400bd4 to 03500bdb has its CatchHandler @ 03400c5c */
                System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_Int32Enum>__Dispose
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                           &local_40,
                           Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_Dispose__
                          );
                    /* try { // try from 03400bdc to 03500bdf has its CatchHandler @ 03400c10 */
                    /* try { // try from 03400be0 to 03500be3 has its CatchHandler @ 03400c20 */
                    /* try { // try from 03400be4 to 03500be7 has its CatchHandler @ 03400c1c */
                    /* try { // try from 03400be8 to 03500beb has its CatchHandler @ 03400c18 */
                    /* try { // try from 03400bec to 03500bef has its CatchHandler @ 03400c08 */
                    /* try { // try from 03400bf0 to 03500bf7 has its CatchHandler @ 03400c28 */
                return iVar4 != 4;
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


// ===== public override void UpdateHeaderPosition()  [RVA 0x3300C74]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$UpdateHeaderPosition @ RVA 0x3300C74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual bool PADBDIONJAJ()  [RVA 0x3300C78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$PADBDIONJAJ @ RVA 0x3300C78

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__PADBDIONJAJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
                    /* try { // try from 03400c7c to 03500c7f has its CatchHandler @ 03400d90 */
  return true;
}


// ===== public void .ctor()  [RVA 0x3300C80]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$.ctor @ RVA 0x3300C80

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3300C88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$OnDestroy @ RVA 0x3300C88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
                    /* try { // try from 03400c90 to 03500cf7 has its CatchHandler @ 03400dac */
  if ((DAT_0456771c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456771c = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
                    /* try { // try from 03400cf8 to 03500d0f has its CatchHandler @ 03400728 */
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03400d10 to 03500d27 has its CatchHandler @ 03400d9c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
                    /* try { // try from 03400d28 to 03500d77 has its CatchHandler @ 03400728 */
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03400d78 to 03500d87 has its CatchHandler @ 03400d9c */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll(pNVar2,HODGKDNOHLP,(MethodInfo *)0x0)
    ;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x3300D7C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$EJHAPHAHMHG @ RVA 0x3300D7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}


// ===== protected virtual void HJNGLKMNEIB(CPAPMBPHEAB IMMNELPBGIF)  [RVA 0x3300D80]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$HJNGLKMNEIB @ RVA 0x3300D80

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__HJNGLKMNEIB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,int32_t IMMNELPBGIF,
               MethodInfo *method)

{
                    /* try { // try from 03400d88 to 03500da3 has its CatchHandler @ 03400dac */
                    /* catch() { ... } // from try @ 03400c7c with catch @ 03400d90 */
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields).super.super.super._btnOK,
             (uint)(IMMNELPBGIF == 1) << 1,true,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void FKEGLMMHKEO()  [RVA 0x3300D9C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FKEGLMMHKEO @ RVA 0x3300D9C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FKEGLMMHKEO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
                    /* catch() { ... } // from try @ 03400d10 with catch @ 03400d9c
                       catch() { ... } // from try @ 03400d78 with catch @ 03400d9c */
                    /* try { // try from 03400da4 to 03500daf has its CatchHandler @ 03400728 */
                    /* catch() { ... } // from try @ 03400b9c with catch @ 03400dac
                       catch() { ... } // from try @ 03400c90 with catch @ 03400dac
                       catch() { ... } // from try @ 03400d88 with catch @ 03400dac */
                    /* try { // try from 03400db0 to 03501083 has its CatchHandler @ 03400db0
                       catch() { ... } // from try @ 03400db0 with catch @ 03400db0
                       catch() { ... } // from try @ 034012d8 with catch @ 03400db0
                       catch() { ... } // from try @ 03401398 with catch @ 03400db0
                       catch() { ... } // from try @ 034013a0 with catch @ 03400db0
                       catch() { ... } // from try @ 03401498 with catch @ 03400db0 */
  if ((DAT_0456771d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456771d = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== protected virtual void PFOCPBKPHDJ(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x3300E0C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$PFOCPBKPHDJ @ RVA 0x3300E0C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__PFOCPBKPHDJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  DialogsManager_o *__this_01;
  RaidClansManager_o *__this_02;
  
  if ((DAT_0456771e & 1) == 0) {
    __this = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)
             FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456771e = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)__this);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x43,method);
    __this_01 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (DialogsManager_o *)0x0) {
      DialogsManager__IDKIMGGFFNH(__this_01,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (__this_02 != (RaidClansManager_o *)0x0) {
        RaidClansManager__FOJEJJGMIGP(__this_02,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3300FF0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$.cctor @ RVA 0x3300FF0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog___cctor(MethodInfo *method)

{
  EEHFEPPDBHL_o **ppEVar1;
  
  if ((DAT_0456771f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456771f = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->KGOBMNCADHH =
       StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields,
                     StringLiteral_1/*""*/);
  ppEVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->FIGLLHBDHCN
  ;
  *ppEVar1 = (EEHFEPPDBHL_o *)0x0;
  thunk_FUN_01c20e04(ppEVar1,0);
  return;
}


// ===== private void FPCFNCJADKF(LabelButton BECCOGAMKJL)  [RVA 0x3301070]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FPCFNCJADKF @ RVA 0x3301070

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               LabelButton_o *BECCOGAMKJL,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  RaidConfig_o *pJVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  RaidPaymentService_o *__this_00;
  RaidConfig_DBNJFPILODG_o *pJVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  UnityEngine_Color_o CJNHFNHJHPE;
  int32_t local_34;
  
                    /* try { // try from 03401084 to 035010ab has its CatchHandler @ 034013e0 */
  if ((DAT_04567720 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_265/*" <quad name=MiscSprites.ruby /> "*/);
    FUN_01bab630(&StringLiteral_4853/*"CreateBtn"*/);
                    /* try { // try from 034010e0 to 0350110b has its CatchHandler @ 034013dc */
    DAT_04567720 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar4 != (RaidConfig_o *)0x0) {
    if ((pJVar4->fields)._LGFNDLOCGPB_k__BackingField == (RaidConfig_DBNJFPILODG_o *)0x0) {
      local_34 = 0x32;
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar4 == (RaidConfig_o *)0x0) ||
         (pJVar9 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar9 == (RaidConfig_DBNJFPILODG_o *)0x0)) goto LAB_034012d0;
      local_34 = (pJVar9->fields).DDBGOGFKEBF;
    }
                    /* try { // try from 03401148 to 0350115b has its CatchHandler @ 034013d0 */
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar6 = Method_System_Array_Empty<string>__;
                    /* try { // try from 03401160 to 03501167 has its CatchHandler @ 034013cc */
    lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar10 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar10 = *(long *)(lVar6 + 0x38);
    }
                    /* try { // try from 03401174 to 0350117b has its CatchHandler @ 034013d4 */
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
                    /* try { // try from 03401184 to 0350118b has its CatchHandler @ 034013b8 */
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03401194 to 0350119b has its CatchHandler @ 034013b4 */
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    uVar2 = StringLiteral_4853/*"CreateBtn"*/;
    if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 034011ac to 035011df has its CatchHandler @ 034013e8 */
      pIVar11 = pIVar5->klass;
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      uVar1._0_1_ = (pIVar11->_2).rank;
      uVar1._1_1_ = (pIVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 034011e8 to 03501207 has its CatchHandler @ 034013ac */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 03401218 to 03501223 has its CatchHandler @ 034013c4 */
            pVVar7 = pIVar11->vtable + (*piVar13 + 0xc);
            goto LAB_0340121c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0340121c:
      pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar2,uVar14,pVVar7->method);
      str2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(pSVar8,StringLiteral_265/*" <quad name=MiscSprites.ruby /> "*/,str2,(MethodInfo *)0x0);
      if (BECCOGAMKJL != (LabelButton_o *)0x0) {
        LabelButton__set_Text(BECCOGAMKJL,pSVar8,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
        if (__this_00 != (RaidPaymentService_o *)0x0) {
          bVar3 = RaidPaymentService__MIBNBHKOIEI(__this_00,local_34,false,(MethodInfo *)0x0);
          if (!bVar3) {
            CJNHFNHJHPE = CFBGPBCDAGA__NFFPCFGDOKG(0x9b,0x1c,7,0xff,(MethodInfo *)0x0);
                    /* try { // try from 034012b4 to 035012d7 has its CatchHandler @ 034013b0 */
            LabelButton__set_Color(BECCOGAMKJL,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
LAB_034012d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AJNAFLOFLMF(object IMMNELPBGIF)  [RVA 0x33012D4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$AJNAFLOFLMF @ RVA 0x33012D4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__AJNAFLOFLMF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o **ppNVar2;
  ClanLogoImage_o **ppCVar3;
  undefined8 uVar4;
  bool bVar5;
  BKKENCMPLLF_o *__this_00;
  int iVar6;
  int local_34;
  
                    /* try { // try from 034012d8 to 0350137b has its CatchHandler @ 03400db0 */
  if ((DAT_04567721 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04567721 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    iVar6 = 0;
  }
  else {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      __this_00 = (__this->fields).FLLHHEODKPH;
      bVar5 = false;
      if (__this_00 != (BKKENCMPLLF_o *)0x0) {
        CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 0340137c to 03501383 has its CatchHandler @ 034013d8 */
                    /* try { // try from 03401384 to 03501387 has its CatchHandler @ 034013c8 */
                    /* try { // try from 03401388 to 0350138b has its CatchHandler @ 034013c0 */
        BKKENCMPLLF__KGIPHDHPGDL(__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
                    /* try { // try from 0340138c to 0350138f has its CatchHandler @ 034013bc */
        bVar5 = false;
                    /* try { // try from 03401390 to 03501397 has its CatchHandler @ 034013e4 */
      }
      goto LAB_0340139c;
    }
  }
                    /* try { // try from 03401398 to 0350139b has its CatchHandler @ 03400db0 */
  bVar5 = true;
LAB_0340139c:
                    /* try { // try from 0340139c to 0350139f has its CatchHandler @ 034013a8 */
  ppNVar2 = &(__this->fields).LBFACKCBBOD;
                    /* try { // try from 034013a0 to 03501407 has its CatchHandler @ 03400db0 */
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
                    /* catch() { ... } // from try @ 0340139c with catch @ 034013a8 */
  thunk_FUN_01c20e04(ppNVar2,0);
  ppCVar3 = &(__this->fields).NCEGFHDDGOO;
                    /* catch() { ... } // from try @ 034011e8 with catch @ 034013ac */
                    /* catch() { ... } // from try @ 034012b4 with catch @ 034013b0 */
  *ppCVar3 = (ClanLogoImage_o *)0x0;
                    /* catch() { ... } // from try @ 03401194 with catch @ 034013b4 */
                    /* catch() { ... } // from try @ 03401184 with catch @ 034013b8 */
  thunk_FUN_01c20e04(ppCVar3,0);
                    /* catch() { ... } // from try @ 0340138c with catch @ 034013bc */
  if (!bVar5) {
                    /* catch() { ... } // from try @ 03401388 with catch @ 034013c0 */
                    /* catch() { ... } // from try @ 03401218 with catch @ 034013c4 */
    local_34 = iVar6;
                    /* catch() { ... } // from try @ 03401384 with catch @ 034013c8 */
                    /* catch() { ... } // from try @ 03401160 with catch @ 034013cc */
    uVar4 = thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* catch() { ... } // from try @ 03401148 with catch @ 034013d0 */
                    /* catch() { ... } // from try @ 03401174 with catch @ 034013d4 */
                    /* catch() { ... } // from try @ 0340137c with catch @ 034013d8 */
                    /* catch() { ... } // from try @ 034010e0 with catch @ 034013dc */
                    /* catch() { ... } // from try @ 03401084 with catch @ 034013e0 */
                    /* catch() { ... } // from try @ 03401390 with catch @ 034013e4 */
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar4,(__this->klass->vtable)._13_OnClose.method);
  }
                    /* catch() { ... } // from try @ 034011ac with catch @ 034013e8 */
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x3301400]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$IGDDKJJMDLP @ RVA 0x3301400

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void EAIIDFHIBHB()  [RVA 0x3301404]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$EAIIDFHIBHB @ RVA 0x3301404

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__EAIIDFHIBHB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  int32_t PGGOPJDLPDI;
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_c *pNVar2;
  bool bVar3;
  ulong uVar4;
  RaidConfig_o *pJVar5;
  RaidPaymentService_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar6;
  BKKENCMPLLF_o *pBVar7;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  ClanLogoImage_o *pCVar10;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  RaidConfig_DBNJFPILODG_o *pJVar11;
  EEHFEPPDBHL_o *pEVar12;
  ClanLogoImage_o **ppCVar13;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o **ppNVar14;
  float __this_03;
  undefined4 local_24;
  
                    /* try { // try from 03401408 to 0350140b has its CatchHandler @ 03401418 */
                    /* catch() { ... } // from try @ 03401408 with catch @ 03401418 */
  if ((DAT_04567722 & 1) == 0) {
                    /* try { // try from 03401428 to 03501497 has its CatchHandler @ 034014ac */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_AJNAFLOFLMF__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_133/*"\n}"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
                    /* try { // try from 03401498 to 035014a3 has its CatchHandler @ 03400db0 */
    FUN_01bab630(&StringLiteral_17011/*"clanCreateSummary"*/);
                    /* try { // try from 034014a4 to 035014ab has its CatchHandler @ 034014ac */
    FUN_01bab630(&StringLiteral_374/*" color=#00000000 > "*/);
                    /* catch() { ... } // from try @ 03401428 with catch @ 034014ac
                       catch() { ... } // from try @ 034014a4 with catch @ 034014ac */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_22231/*"{\n<quad name=MiscSprites.ruby usedsize="*/);
    DAT_04567722 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FNMNFEGFOEK(__this,method);
  uVar4 = (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                    (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar5 != (RaidConfig_o *)0x0) &&
     (pJVar11 = (pJVar5->fields)._LGFNDLOCGPB_k__BackingField,
     pJVar11 != (RaidConfig_DBNJFPILODG_o *)0x0)) {
    PGGOPJDLPDI = (pJVar11->fields).DDBGOGFKEBF;
    __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_00 != (RaidPaymentService_o *)0x0) {
      bVar3 = RaidPaymentService__MIBNBHKOIEI(__this_00,PGGOPJDLPDI,true,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_22231/*"{\n<quad name=MiscSprites.ruby usedsize="*/;
          __this_03 = (float)thunk_FUN_01c20e04(values->m_Items);
          local_24 = 0x43160000;
          pSVar6 = System_Single__ToString(__this_03,(MethodInfo *)&stack0xffffffffffffffdc);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_374/*" color=#00000000 > "*/;
              thunk_FUN_01c20e04();
              pBVar7 = (__this->fields).FLLHHEODKPH;
              if (pBVar7 == (BKKENCMPLLF_o *)0x0) goto LAB_0340184c;
              pSVar6 = BKKENCMPLLF__MJBHKOJAFOH(pBVar7,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar6;
                thunk_FUN_01c20e04(values->m_Items + 3,pSVar6);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_133/*"\n}"*/;
                  thunk_FUN_01c20e04();
                  pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
                  pSVar6 = System_String__Concat(StringLiteral_17011/*"clanCreateSummary"*/,pSVar6,(MethodInfo *)0x0);
                  IELDNEAAPBE = (System_Action_object__o *)
                                thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                  System_Action<object>___ctor();
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)
                           DialogsOpener__JNDPLPKDPCP
                                     (StringLiteral_17850/*"dlgWarning"*/,pSVar6,StringLiteral_9679/*"OK"*/,
                                      StringLiteral_3640/*"CANCEL"*/,IELDNEAAPBE,2,0,false,false,StringLiteral_1/*""*/
                                      ,true,true,true,true,(MethodInfo *)0x0);
                  pNVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo;
                  if (pNVar8 == (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                    (__this->fields).LBFACKCBBOD = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
                  }
                  else {
                    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
                    if (((pNVar8->klass->_2).naturalAligment < bVar1) ||
                       ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
LAB_0340174c:
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64(pNVar8);
                    }
                    (__this->fields).LBFACKCBBOD = pNVar8;
                    if (((pNVar8->klass->_2).naturalAligment < bVar1) ||
                       ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2
                       )) goto LAB_0340174c;
                  }
                  ppNVar14 = &(__this->fields).LBFACKCBBOD;
                  thunk_FUN_01c20e04(ppNVar14,pNVar8);
                  if (*ppNVar14 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                    pUVar9 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppNVar14,(MethodInfo *)0x0);
                    pBVar7 = (__this->fields).FLLHHEODKPH;
                    if ((pBVar7 != (BKKENCMPLLF_o *)0x0) &&
                       (pEVar12 = (pBVar7->fields)._OGOHLLOEANF_k__BackingField,
                       pEVar12 != (EEHFEPPDBHL_o *)0x0)) {
                      pCVar10 = KFCFGKEHPNK__LEIGOOFFFPE
                                          (pUVar9,(pEVar12->fields).JAAACMPGMKJ,0,1.5,
                                           (MethodInfo *)0x0);
                      ppCVar13 = &(__this->fields).NCEGFHDDGOO;
                      *ppCVar13 = pCVar10;
                      thunk_FUN_01c20e04(ppCVar13,pCVar10);
                      if (*ppCVar13 != (ClanLogoImage_o *)0x0) {
                        pUVar9 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*ppCVar13,(MethodInfo *)0x0);
                        if (DAT_0455fa77 == '\0') {
                          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                          DAT_0455fa77 = '\x01';
                        }
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__set_localPosition
                                    (pUVar9,(UnityEngine_Vector3_o)
                                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector
                                            ).fields,(MethodInfo *)0x0);
                          if ((*ppCVar13 != (ClanLogoImage_o *)0x0) &&
                             (__this_01 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)*ppCVar13,
                                                     (MethodInfo *)0x0),
                             __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                            method_00 = (MethodInfo *)0x0;
                            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                            if (*ppNVar14 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                              Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
                                        (__this_02,((*ppNVar14)->fields).super._btnOK,method_00);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0340184c;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_0340184c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x3301854]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$Update @ RVA 0x3301854

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  ClanLogoImage_o *pCVar2;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_UI_Graphic_o *__this_03;
  UnityEngine_RectTransform_o *t1;
  UnityEngine_GameObject_o *__this_04;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o *pNVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567723 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567723 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).LBFACKCBBOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).LBFACKCBBOD;
  if (((pNVar3 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) &&
      (__this_00 = (pNVar3->fields)._label, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) &&
     (__this_01 = Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
                            ((Nekki_SF2_GUI_TextPic_o *)__this_00,false,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_ResolutionImage__o *)0x0)) {
    if ((__this_01->fields)._size < 1) {
      return;
    }
    pCVar2 = (__this->fields).NCEGFHDDGOO;
    if (pCVar2 != (ClanLogoImage_o *)0x0) {
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_UI_Graphic_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,0,
                             Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (__this_03 != (UnityEngine_UI_Graphic_o *)0x0) {
        t1 = UnityEngine_UI_Graphic__get_rectTransform(__this_03,(MethodInfo *)0x0);
        UVar4 = UnityEngine_TransformExtensions__GetWorldRect
                          (t1,(UnityEngine_Vector3_array *)0x0,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          value.fields.y = UVar4.fields.m_YMin + UVar4.fields.m_Height * 0.5;
          value.fields.x = UVar4.fields.m_XMin + UVar4.fields.m_Width * 0.5;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_position(__this_02,value,(MethodInfo *)0x0);
          pCVar2 = (__this->fields).NCEGFHDDGOO;
          if ((pCVar2 != (ClanLogoImage_o *)0x0) &&
             (__this_04 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_04,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x330199C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$OnClose @ RVA 0x330199C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  BKKENCMPLLF_o *pBVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04567724 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    DAT_04567724 = 1;
  }
  pBVar1 = (__this->fields).FLLHHEODKPH;
  if (pBVar1 != (BKKENCMPLLF_o *)0x0) {
    pSVar2 = BKKENCMPLLF__MJBHKOJAFOH(pBVar1,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    }
    Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->KGOBMNCADHH = pSVar2
    ;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields,
                       pSVar2);
    pBVar1 = (__this->fields).FLLHHEODKPH;
    if (pBVar1 != (BKKENCMPLLF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->FIGLLHBDHCN =
           (pBVar1->fields)._OGOHLLOEANF_k__BackingField;
      thunk_FUN_01c20e04();
      Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3301A58]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$Init @ RVA 0x3301A58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *parent;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  LabelButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar4;
  BKKENCMPLLF_o *pBVar5;
  System_Action_CPAPMBPHEAB__o *CJNHFNHJHPE;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_StaticFields *pNVar6;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar7;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o **ppNVar8;
  EEHFEPPDBHL_o *pEVar9;
  BKKENCMPLLF_o **ppBVar10;
  EEHFEPPDBHL_o **ppEVar11;
  
  if ((DAT_04567725 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&BKKENCMPLLF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanProfileWidget>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_4853/*"CreateBtn"*/);
    FUN_01bab630(&StringLiteral_19344/*"labelCreateClan"*/);
    DAT_04567725 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,IMMNELPBGIF);
    DAT_04565b84 = '\x01';
  }
  pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
       pNVar7 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0)) goto LAB_03401e74;
    Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll(pNVar7,pUVar2,pUVar3,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_19344/*"labelCreateClan"*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super.super._btnOK;
  if (__this_00 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_00,StringLiteral_4853/*"CreateBtn"*/,(MethodInfo *)0x0);
    parent = (__this->fields)._profileWidgetMount;
    pUVar2 = (__this->fields)._profileWidgetPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,(UnityEngine_Transform_o *)parent,false,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<ClanProfileWidget>__);
      ppNVar8 = &(__this->fields).BBKLDPELJHI;
      *ppNVar8 = pNVar4;
      thunk_FUN_01c20e04(ppNVar8,pNVar4);
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar9 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->
               FIGLLHBDHCN;
      pBVar5 = (BKKENCMPLLF_o *)thunk_FUN_01bda818(BKKENCMPLLF_TypeInfo);
      BKKENCMPLLF___ctor(pBVar5,pEVar9,(MethodInfo *)0x0);
      ppBVar10 = &(__this->fields).FLLHHEODKPH;
      *ppBVar10 = pBVar5;
      thunk_FUN_01c20e04(ppBVar10,pBVar5);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields
                         ->KGOBMNCADHH,(MethodInfo *)0x0);
      if (!bVar1) {
        pBVar5 = *ppBVar10;
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        BKKENCMPLLF__BOENJKAFOEC
                  (pBVar5,Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields
                          ->KGOBMNCADHH,(MethodInfo *)0x0);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields;
      pBVar5 = *ppBVar10;
      pEVar9 = pNVar6->FIGLLHBDHCN;
      if (pEVar9 == (EEHFEPPDBHL_o *)0x0) {
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        pEVar9 = (pBVar5->fields)._OGOHLLOEANF_k__BackingField;
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields;
        }
        pNVar6->FIGLLHBDHCN = pEVar9;
        thunk_FUN_01c20e04(&pNVar6->FIGLLHBDHCN,pEVar9);
      }
      else {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pEVar9 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->
                   FIGLLHBDHCN;
        }
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        ppEVar11 = &(pBVar5->fields)._OGOHLLOEANF_k__BackingField;
        *ppEVar11 = pEVar9;
        thunk_FUN_01c20e04(ppEVar11);
        if (*ppBVar10 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        BKKENCMPLLF__PEILNGJMJEC(*ppBVar10,1,(MethodInfo *)0x0);
      }
      if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__Init
                  (*ppNVar8,(__this->fields).FLLHHEODKPH,(MethodInfo *)0x0);
        pNVar4 = (__this->fields).BBKLDPELJHI;
        CJNHFNHJHPE = (System_Action_CPAPMBPHEAB__o *)
                      thunk_FUN_01bda818(System_Action<CPAPMBPHEAB>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__add_OnInput
                    (pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetVisibleJoinTypePanel
                      (*ppNVar8,false,(MethodInfo *)0x0);
            if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetTitleAlias
                        (*ppNVar8,StringLiteral_19344/*"labelCreateClan"*/,(MethodInfo *)0x0);
              if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished
                  == 0) {
                thunk_FUN_01ba7564();
              }
              bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->
                                 static_fields->KGOBMNCADHH,(MethodInfo *)0x0);
              if (bVar1) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x03401e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                        (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03401e74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x3301E78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$LCGFJKFJKJK @ RVA 0x3301E78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x3301E7C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$GLANJNFACKI @ RVA 0x3301E7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x3301E80]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$GKPJMHOFIOO @ RVA 0x3301E80

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this_00;
  MethodInfo *method_00;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04567726 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567726 = 1;
  }
  pLVar3 = (__this->fields).super.super.super._btnCancel;
  if ((pLVar3 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar3 = (__this->fields).super.super.super._btnOK;
    if ((pLVar3 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).super.super.super._btnCancel;
      if (pLVar3 != (LabelButton_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
          pLVar3 = (__this->fields).super.super.super._btnOK;
          if (pLVar3 != (LabelButton_o *)0x0) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
              __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)
                          (*(__this->klass->vtable)._40_PADBDIONJAJ.methodPtr)
                                    (__this,(__this->klass->vtable)._40_PADBDIONJAJ.method);
              if (((ulong)__this_00 & 1) != 0) {
                Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
                          (__this_00,(__this->fields).super.super.super._btnOK,method_00);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

