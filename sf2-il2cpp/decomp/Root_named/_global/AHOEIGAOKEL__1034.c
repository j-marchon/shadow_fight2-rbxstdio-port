// TypeDefIndex 1034
// Namespace: 
// public class AHOEIGAOKEL : OMLLDCIMLBB<object>
// Fields:
//   private float KKJILEFHKAC; // 0x18
//   private float HBEMCBKLCOE; // 0x1C
//   private float MBFIKHPCODJ; // 0x20
//   private int GPIIGPOLINL; // 0x24
//   private GameObject MEMMHKLOBKN; // 0x28
//   private List<FLCGGKEODNC> PGCBEJGMIMA; // 0x30
//   private List<LabelButton> HANEOGJOELA; // 0x38
//   private Action<object> DNPHBCPFMPB; // 0x40
//   private NewsDialog ILCGLGPADOK; // 0x48
//   private LabelButton DMIJHGBCKCA; // 0x50

// ===== public void GIENGNEGHPJ(float OAGELANKMBH, float IOJNHKIPJOK, float ECCPLAMGAKE, GameObject ODNJEHJPBGA, Action<object> IELDNEAAPBE, NewsDialog LMEHKLFGEHI)  [RVA 0x30CF2D4]
// AHOEIGAOKEL$$GIENGNEGHPJ @ RVA 0x30CF2D4

void AHOEIGAOKEL__GIENGNEGHPJ
               (AHOEIGAOKEL_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,float ECCPLAMGAKE,
               UnityEngine_GameObject_o *ODNJEHJPBGA,System_Action_object__o *IELDNEAAPBE,
               Nekki_SF2_GUI_Dialogs_NewsDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  int32_t length;
  System_Action_object__o **ppSVar1;
  System_Action_string__o *CJNHFNHJHPE;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE_00;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar2;
  DGGBFKNKEAH_o *pDVar3;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o **ppNVar4;
  UnityEngine_GameObject_o **ppUVar5;
  
  if ((DAT_045662f5 & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_IHKHIJONLCM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_JCLPLBEJHGM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_POGAGHOPPEI__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Clear__);
    DAT_045662f5 = 1;
  }
  ppUVar5 = &(__this->fields).MEMMHKLOBKN;
  *ppUVar5 = ODNJEHJPBGA;
  (__this->fields).KKJILEFHKAC = OAGELANKMBH;
  (__this->fields).HBEMCBKLCOE = IOJNHKIPJOK;
  (__this->fields).MBFIKHPCODJ = ECCPLAMGAKE;
  thunk_FUN_01c20e04(ppUVar5,ODNJEHJPBGA);
  pSVar2 = (__this->fields).PGCBEJGMIMA;
  if (pSVar2 != (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields).DNPHBCPFMPB;
    *ppSVar1 = IELDNEAAPBE;
    thunk_FUN_01c20e04(ppSVar1,IELDNEAAPBE);
    ppNVar4 = &(__this->fields).ILCGLGPADOK;
    *ppNVar4 = LMEHKLFGEHI;
    thunk_FUN_01c20e04(ppNVar4,LMEHKLFGEHI);
    (__this->fields).GPIIGPOLINL = 0;
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__APIBGCEDBJA(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (DAT_045655e8 == '\0') {
        FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
        DAT_045655e8 = '\x01';
      }
      pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
      CJNHFNHJHPE_00 =
           (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
        DGGBFKNKEAH__OMNHIKEFCCG(pDVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
        pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        CJNHFNHJHPE_01 =
             (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo)
        ;
        System_Action<object>___ctor();
        if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
          DGGBFKNKEAH__AOMBGFMAOMJ(pDVar3,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCNNHNAIJFB(object IMMNELPBGIF)  [RVA 0x30CF540]
// AHOEIGAOKEL$$HCNNHNAIJFB @ RVA 0x30CF540

void AHOEIGAOKEL__HCNNHNAIJFB(AHOEIGAOKEL_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t *piVar2;
  FLCGGKEODNC_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_o *pPVar4;
  System_String_o **ppSVar5;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_01;
  System_Action_object__o *pSVar6;
  System_String_o *url;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o *pNVar7;
  
  if ((DAT_045662f6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045662f6 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_031cf778;
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar2 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
  __this_01 = (__this->fields).PGCBEJGMIMA;
  if (__this_01 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) goto LAB_031cf778;
  if (((__this_01->fields)._size <= *piVar2) ||
     (__this_00 = (FLCGGKEODNC_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,*piVar2,
                             Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__),
     __this_00 == (FLCGGKEODNC_o *)0x0)) {
    return;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this_00->fields).PHONOLEMBHN,(MethodInfo *)0x0);
  if (!bVar1) {
    url = (__this_00->fields).PHONOLEMBHN;
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar4 = (pNVar3->fields).QuestParameters, pPVar4 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar4->fields).JEMIJCDAKLB = (__this_00->fields).PHONOLEMBHN;
      thunk_FUN_01c20e04();
      pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x50,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_031cf778;
  }
  bVar1 = FLCGGKEODNC__GJNNHMKDOBG(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) goto LAB_031cf6f0;
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
    (pNVar7->fields).GoShopAfterClose = true;
    ppSVar5 = &(pNVar7->fields).RedirectShopAfterClose;
    (pNVar7->fields).RedirectShopAfterClose = (__this_00->fields).DMMDLLBOHNP;
LAB_031cf73c:
    thunk_FUN_01c20e04(ppSVar5);
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
    (pNVar7->fields).SliderType = (__this_00->fields).HPPDIEDAKEC;
  }
  else {
LAB_031cf6f0:
    if ((__this_00->fields).KMJPPCLIEDG != false) {
      pNVar7 = (__this->fields).ILCGLGPADOK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar7 = (__this->fields).ILCGLGPADOK;
        if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
        ppSVar5 = &(pNVar7->fields).BuyItemOnClose;
        (pNVar7->fields).BuyItemOnClose = (__this_00->fields).DMMDLLBOHNP;
        goto LAB_031cf73c;
      }
    }
  }
  pSVar6 = (__this->fields).DNPHBCPFMPB;
  if (pSVar6 != (System_Action_object__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031cf774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar6->fields).super.super.invoke_impl)
              ((pSVar6->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar6->fields).super.super.method);
    return;
  }
LAB_031cf778:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void POGAGHOPPEI(string CJNPBEJHHLF)  [RVA 0x30CF784]
// AHOEIGAOKEL$$POGAGHOPPEI @ RVA 0x30CF784

void AHOEIGAOKEL__POGAGHOPPEI(AHOEIGAOKEL_o *__this,System_String_o *CJNPBEJHHLF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_02;
  Il2CppObject *pIVar2;
  System_String_o *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045662f7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    DAT_045662f7 = 1;
    CJNPBEJHHLF = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HANEOGJOELA;
  if (__this_01 == (System_Collections_Generic_List_LabelButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,CJNPBEJHHLF);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__)
      ;
      return;
    }
    if ((SFButton_o *)local_50.fields._current == (SFButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (__this->fields).PGCBEJGMIMA;
    if (__this_02 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        ((SFButton_Fields *)((long)local_50.fields._current + 0x10))->ButtonId,
                        Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    if (pIVar2 == (Il2CppObject *)0x0) break;
    if (*(char *)((long)&pIVar2[3].klass + 4) != '\0') {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,false,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IHKHIJONLCM(BKLDKOMCOPN IDIBNBBFFCO)  [RVA 0x30CF928]
// AHOEIGAOKEL$$IHKHIJONLCM @ RVA 0x30CF928

void AHOEIGAOKEL__IHKHIJONLCM(AHOEIGAOKEL_o *__this,BKLDKOMCOPN_o *IDIBNBBFFCO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_02;
  Il2CppObject *pIVar2;
  BKLDKOMCOPN_o *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045662f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    DAT_045662f8 = 1;
    IDIBNBBFFCO = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HANEOGJOELA;
  if (__this_01 == (System_Collections_Generic_List_LabelButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,IDIBNBBFFCO);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__)
      ;
      return;
    }
    if ((SFButton_o *)local_50.fields._current == (SFButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (__this->fields).PGCBEJGMIMA;
    if (__this_02 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        ((SFButton_Fields *)((long)local_50.fields._current + 0x10))->ButtonId,
                        Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    if (pIVar2 == (Il2CppObject *)0x0) break;
    if (*(char *)((long)&pIVar2[3].klass + 4) != '\0') {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BPHHDPIFBOO(FLCGGKEODNC DNBBBGEENMM)  [RVA 0x30CFACC]
// AHOEIGAOKEL$$BPHHDPIFBOO @ RVA 0x30CFACC

void AHOEIGAOKEL__BPHHDPIFBOO(AHOEIGAOKEL_o *__this,FLCGGKEODNC_o *DNBBBGEENMM,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  HOOAAGABMBL_o *__this_01;
  System_String_o *str2;
  RaidConfig_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o *pJVar7;
  Roster_o *__this_03;
  System_Action_object__o *IELDNEAAPBE;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_04;
  System_Collections_Generic_List_LabelButton__o *__this_05;
  FLCGGKEODNC_array *pFVar8;
  LabelButton_array *pLVar9;
  LabelButton_o **ppLVar10;
  LabelButton_o *pLVar11;
  System_String_o *pSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar17;
  
  if ((DAT_045662f9 & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_HCNNHNAIJFB__);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LabelButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<LabelButton>__);
    FUN_01bab630(&StringLiteral_20290/*"probabilityDlgBuy{img::MiscSprites.ruby}{"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_10394/*"Prefabs/Buttons/LabelButton"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_8313/*"LabelButton"*/);
    DAT_045662f9 = 1;
  }
  ppLVar10 = &(__this->fields).DMIJHGBCKCA;
  pLVar11 = *ppLVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pLVar11 = (LabelButton_o *)
              UnityEngine_Resources__Load<object>
                        (StringLiteral_10394/*"Prefabs/Buttons/LabelButton"*/,Method_UnityEngine_Resources_Load<LabelButton>__);
    *ppLVar10 = pLVar11;
    thunk_FUN_01c20e04(ppLVar10,pLVar11);
  }
  pLVar11 = *ppLVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  __this_00 = (__this->fields).MEMMHKLOBKN;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pLVar11 = (__this->fields).DMIJHGBCKCA;
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pLVar11 = (LabelButton_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pLVar11,pUVar6,true,
                         Method_UnityEngine_Object_Instantiate<LabelButton>__);
    if ((pLVar11 != (LabelButton_o *)0x0) &&
       (UnityEngine_Object__set_name
                  ((UnityEngine_Object_o *)pLVar11,StringLiteral_8313/*"LabelButton"*/,(MethodInfo *)0x0),
       DNBBBGEENMM != (FLCGGKEODNC_o *)0x0)) {
      LabelButton__set_ButtonColor(pLVar11,(DNBBBGEENMM->fields).BANIDGFENDE,(MethodInfo *)0x0);
      if ((DNBBBGEENMM->fields).KMJPPCLIEDG == false) {
        LabelButton__set_Alias(pLVar11,(DNBBBGEENMM->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
      }
      else {
        SFButton__set_IsFlashing((SFButton_o *)pLVar11,true,(MethodInfo *)0x0);
        iVar2 = (DNBBBGEENMM->fields).HPPDIEDAKEC;
        if (iVar2 == 8) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if ((__this_02 == (RaidConfig_o *)0x0) ||
             (pJVar7 = RaidConfig__DIFLKMKBENA
                                 (__this_02,(DNBBBGEENMM->fields).DMMDLLBOHNP,false,
                                  (MethodInfo *)0x0), pJVar7 == (RaidConfig_ENBCJNLAHAC_o *)0x0))
          goto LAB_031d0050;
          piVar1 = &(pJVar7->fields).NGMFKGGBHND;
          pSVar12 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat
                              (StringLiteral_20290/*"probabilityDlgBuy{img::MiscSprites.ruby}{"*/,pSVar12,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
          LabelButton__set_Alias(pLVar11,pSVar12,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 == (Roster_o *)0x0) goto LAB_031d0050;
          bVar5 = Roster__MIFEPGNGDON(__this_03,(long)*piVar1,(MethodInfo *)0x0);
          if (bVar5) {
            fVar16 = 1.0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
          }
          else {
            if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UVar17 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
            fVar16 = UVar17.fields.a;
            fVar15 = UVar17.fields.b;
            fVar14 = UVar17.fields.g;
            fVar13 = UVar17.fields.r;
          }
          UVar17.fields.g = fVar14;
          UVar17.fields.r = fVar13;
          UVar17.fields.a = fVar16;
          UVar17.fields.b = fVar15;
          LabelButton__set_Color(pLVar11,UVar17,(MethodInfo *)0x0);
        }
        else if (iVar2 == 6) {
          pSVar12 = (DNBBBGEENMM->fields).DMMDLLBOHNP;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = NLPJLHOEAOE__FEHJLBEGAPO(pSVar12,(MethodInfo *)0x0);
          if (__this_01 == (HOOAAGABMBL_o *)0x0) goto LAB_031d0050;
          pSVar12 = HOOAAGABMBL__GFMPCIOBMBJ(__this_01,(MethodInfo *)0x0);
          str2 = HOOAAGABMBL__EHECKFKDKJD(__this_01,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat(pSVar12,StringLiteral_167/*" "*/,str2,(MethodInfo *)0x0);
          LabelButton__set_Text(pLVar11,pSVar12,(MethodInfo *)0x0);
        }
      }
      LabelButton__set_ControlPriority(pLVar11,3,(MethodInfo *)0x0);
      LabelButton__set_Control(pLVar11,(DNBBBGEENMM->fields).ACNLHENNKAJ,(MethodInfo *)0x0);
      (pLVar11->fields).super.super.ButtonId = (__this->fields).GPIIGPOLINL;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      SFButton__AddEventListener((SFButton_o *)pLVar11,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar6,(__this->fields).KKJILEFHKAC,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar6,(__this->fields).HBEMCBKLCOE,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        value.fields.z = 1.0;
        value.fields.x = 1.0;
        value.fields.y = 1.0;
        UnityEngine_Transform__set_localScale(pUVar6,value,(MethodInfo *)0x0);
        lVar4 = Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__;
        __this_04 = (__this->fields).PGCBEJGMIMA;
        if (__this_04 != (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
          pFVar8 = (__this_04->fields)._items;
          (__this_04->fields)._version = (__this_04->fields)._version + 1;
          if (pFVar8 != (FLCGGKEODNC_array *)0x0) {
            uVar3 = (__this_04->fields)._size;
            if (uVar3 < (uint)pFVar8->max_length) {
              (__this_04->fields)._size = uVar3 + 1;
              pFVar8->m_Items[(int)uVar3] = DNBBBGEENMM;
              thunk_FUN_01c20e04(pFVar8->m_Items + (int)uVar3,DNBBBGEENMM);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,
                         (Il2CppObject *)DNBBBGEENMM,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar4 = Method_System_Collections_Generic_List<LabelButton>_Add__;
            __this_05 = (__this->fields).HANEOGJOELA;
            if (__this_05 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
              pLVar9 = (__this_05->fields)._items;
              (__this_05->fields)._version = (__this_05->fields)._version + 1;
              if (pLVar9 != (LabelButton_array *)0x0) {
                uVar3 = (__this_05->fields)._size;
                if (uVar3 < (uint)pLVar9->max_length) {
                  (__this_05->fields)._size = uVar3 + 1;
                  pLVar9->m_Items[(int)uVar3] = pLVar11;
                  thunk_FUN_01c20e04(pLVar9->m_Items + (int)uVar3,pLVar11);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_05,
                             (Il2CppObject *)pLVar11,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                (__this->fields).GPIIGPOLINL = (__this->fields).GPIIGPOLINL + 1;
                (__this->fields).KKJILEFHKAC =
                     (__this->fields).KKJILEFHKAC + (__this->fields).MBFIKHPCODJ;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_031d0050:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HOFDLJKJEAJ()  [RVA 0x30D0054]
// AHOEIGAOKEL$$HOFDLJKJEAJ @ RVA 0x30D0054

void AHOEIGAOKEL__HOFDLJKJEAJ(AHOEIGAOKEL_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Action_string__o *CJNHFNHJHPE;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE_00;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_01;
  System_Collections_Generic_List_LabelButton__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045662fa & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_IHKHIJONLCM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_JCLPLBEJHGM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_POGAGHOPPEI__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    DAT_045662fa = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__LHBNADFCNHO(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__MJJEHFDLAHD(pDVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if (DAT_045655e8 == '\0') {
        FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
        DAT_045655e8 = '\x01';
      }
      pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
      CJNHFNHJHPE_01 =
           (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
        DGGBFKNKEAH__AHKPBJGPOMH(pDVar3,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).HANEOGJOELA;
        if (pSVar2 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
                     Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
          while( true ) {
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_58,
                               Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__
                              );
            __this_00 = local_58.fields._current;
            if (!bVar1) break;
            if ((SFButton_o *)local_58.fields._current == (SFButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            SFButton__RemoveAllEventListener
                      ((SFButton_o *)local_58.fields._current,(MethodInfo *)0x0);
            LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_58,
                     Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
          pSVar2 = (__this->fields).HANEOGJOELA;
          if (pSVar2 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
            length = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                  (MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCLPLBEJHGM(CFEFALDOEMD JNIBOOMFCEG)  [RVA 0x30D0388]
// AHOEIGAOKEL$$JCLPLBEJHGM @ RVA 0x30D0388

void AHOEIGAOKEL__JCLPLBEJHGM(AHOEIGAOKEL_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar2;
  Il2CppObject *pIVar3;
  RaidConfig_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o *pJVar4;
  Roster_o *__this_03;
  undefined8 uVar5;
  CFEFALDOEMD_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o *pNVar6;
  System_Action_object__o *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662fb = 1;
    JNIBOOMFCEG = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HANEOGJOELA;
  if (__this_01 == (System_Collections_Generic_List_LabelButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,JNIBOOMFCEG);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._current = local_98.fields._current;
LAB_031d0494:
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar1) {
LAB_031d0650:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
        return;
      }
      if ((LabelButton_o *)local_80.fields._current == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar2 = (__this->fields).PGCBEJGMIMA;
      if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          (((LabelButton_Fields *)((long)local_80.fields._current + 0x10))->super).
                          super.ButtonId,
                          Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)((long)&pIVar3[3].klass + 4) == '\0');
    pSVar2 = (__this->fields).PGCBEJGMIMA;
    if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId,
                        Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (*(int *)&pIVar3[3].klass == 8) {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pSVar2 = (__this->fields).PGCBEJGMIMA;
      if (pSVar2 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId,
                          Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_02 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar4 = RaidConfig__DIFLKMKBENA(__this_02,pIVar3[2].monitor,false,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pJVar4 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_03 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Roster__MIFEPGNGDON
                        (__this_03,(long)(pJVar4->fields).NGMFKGGBHND,(MethodInfo *)0x0);
      if (bVar1) {
        fVar11 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
      }
      else {
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar12 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
        fVar11 = UVar12.fields.a;
        fVar10 = UVar12.fields.b;
        fVar9 = UVar12.fields.g;
        fVar8 = UVar12.fields.r;
      }
      UVar12.fields.g = fVar9;
      UVar12.fields.r = fVar8;
      UVar12.fields.a = fVar11;
      UVar12.fields.b = fVar10;
      LabelButton__set_Color((LabelButton_o *)__this_00,UVar12,(MethodInfo *)0x0);
      goto LAB_031d0494;
    }
    pNVar6 = (__this->fields).ILCGLGPADOK;
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar6->fields).CloseOnBuy != false) {
      (pNVar6->fields).BuyItemOnClose = (System_String_o *)0x0;
      thunk_FUN_01c20e04(&(pNVar6->fields).BuyItemOnClose,0);
      pSVar7 = (__this->fields).DNPHBCPFMPB;
      local_98.fields._list._0_4_ =
           (((LabelButton_Fields *)((long)__this_00 + 0x10))->super).super.ButtonId;
      uVar5 = thunk_FUN_01bda448(int_TypeInfo,&local_98);
      if (pSVar7 == (System_Action_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(uVar5,uVar5);
      }
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,uVar5,(pSVar7->fields).super.super.method)
      ;
      goto LAB_031d0650;
    }
    SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
  } while( true );
}


// ===== public void .ctor()  [RVA 0x30D0778]
// AHOEIGAOKEL$$.ctor @ RVA 0x30D0778

void AHOEIGAOKEL___ctor(AHOEIGAOKEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_00;
  System_Collections_Generic_List_FLCGGKEODNC__o **ppSVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_LabelButton__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LabelButton>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_045662fc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_FLCGGKEODNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
  ppSVar1 = &(__this->fields).PGCBEJGMIMA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_LabelButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LabelButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>__ctor__);
  ppSVar2 = &(__this->fields).HANEOGJOELA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  return;
}

