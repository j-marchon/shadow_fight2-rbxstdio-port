// TypeDefIndex 1691
// Namespace: Nekki.SF2.GUI.Common.Achievements
// public class AchievementMessagesManager : MonoBehaviour, FLHAOOHNCAL
// Fields:
//   private GameObject _messagePrefab; // 0x20
//   private Action EGMHPABAGML; // 0x28
//   private const string JEBLNKBCKEO = "Prefabs/Common/AchievementMessagesManager";
//   private KIENAPHHHDI BHKGNJNHGAP; // 0x30
//   private static AchievementMessagesManager CBDMFFMCJBK; // 0x0

// ===== public void add_OnMessageHide(Action CJNHFNHJHPE)  [RVA 0x31D0DA4]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$add_OnMessageHide @ RVA 0x31D0DA4

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__add_OnMessageHide
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566ca4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566ca4 = 1;
  }
  ppSVar4 = &(__this->fields).EGMHPABAGML;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnMessageHide(Action CJNHFNHJHPE)  [RVA 0x31D0E40]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$remove_OnMessageHide @ RVA 0x31D0E40

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__remove_OnMessageHide
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566ca5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566ca5 = 1;
  }
  ppSVar4 = &(__this->fields).EGMHPABAGML;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static FLHAOOHNCAL get_Instance()  [RVA 0x31D0EDC]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$get_Instance @ RVA 0x31D0EDC

FLHAOOHNCAL_o *
Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance(MethodInfo *method)

{
  if ((DAT_04566ca6 & 1) == 0) {
    method = (MethodInfo *)
             FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo);
    DAT_04566ca6 = 1;
  }
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Create(method);
  return (FLHAOOHNCAL_o *)
         Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
         CBDMFFMCJBK;
}


// ===== public static void Create()  [RVA 0x31D0F28]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$Create @ RVA 0x31D0F28

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Create(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *target;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *pNVar2;
  
  if ((DAT_04566ca7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<AchievementMessagesManager>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10395/*"Prefabs/Common/AchievementMessagesManager"*/);
    DAT_04566ca7 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
           CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10395/*"Prefabs/Common/AchievementMessagesManager"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    target = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_GetComponent<AchievementMessagesManager>__);
      Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
      CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->
                         static_fields,pNVar2);
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static bool get_IsInstanceExists()  [RVA 0x31D106C]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$get_IsInstanceExists @ RVA 0x31D106C

bool Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_IsInstanceExists
               (MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *x;
  
  if ((DAT_04566ca8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ca8 = 1;
  }
  x = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_TypeInfo->static_fields->
      CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== private void Awake()  [RVA 0x31D10E4]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$Awake @ RVA 0x31D10E4

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__Awake
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               MethodInfo *method)

{
  KIENAPHHHDI_o *__this_00;
  MethodInfo *extraout_x1;
  KIENAPHHHDI_o **ppKVar1;
  UnityEngine_GameObject_o *MPBBJAMGECF;
  
  if ((DAT_04566ca9 & 1) == 0) {
    FUN_01bab630(&KIENAPHHHDI_TypeInfo);
    DAT_04566ca9 = 1;
    method = extraout_x1;
  }
  MPBBJAMGECF = (__this->fields)._messagePrefab;
  __this_00 = (KIENAPHHHDI_o *)thunk_FUN_01bda818(KIENAPHHHDI_TypeInfo,method);
  KIENAPHHHDI___ctor(__this_00,MPBBJAMGECF,(MethodInfo *)0x0);
  ppKVar1 = &(__this->fields).BHKGNJNHGAP;
  *ppKVar1 = __this_00;
  thunk_FUN_01c20e04(ppKVar1,__this_00);
  return;
}


// ===== public void ShowAchievementMessage(KMJDCOABCCG LFOOJOJHDFM)  [RVA 0x31D114C]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$ShowAchievementMessage @ RVA 0x31D114C

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__ShowAchievementMessage
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               KMJDCOABCCG_o *LFOOJOJHDFM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  KIENAPHHHDI_o *__this_01;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *pNVar1;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityEventBase_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_04;
  void **ppvVar2;
  UnityEngine_Events_UnityEvent_o *__this_05;
  
  if ((DAT_04566caa & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_BIMMHDDABLF__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_TypeInfo)
    ;
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566caa = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(
                                Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_TypeInfo
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (__this->fields).BHKGNJNHGAP;
    if (__this_01 != (KIENAPHHHDI_o *)0x0) {
      pNVar1 = KIENAPHHHDI__EOHMFJFFFIN(__this_01,(MethodInfo *)0x0);
      ppvVar2 = &__this_00[1].monitor;
      *ppvVar2 = pNVar1;
      thunk_FUN_01c20e04(ppvVar2,pNVar1);
      if (*ppvVar2 != (UnityEngine_Component_o *)0x0) {
        __this_02 = UnityEngine_Component__get_transform(*ppvVar2,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
          if (*ppvVar2 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *)0x0) {
            Nekki_SF2_GUI_Common_Achievements_AchievementMessage__set_Achievement
                      (*ppvVar2,LFOOJOJHDFM,(MethodInfo *)0x0);
            if ((*ppvVar2 != (void *)0x0) &&
               (__this_03 = *(UnityEngine_Events_UnityEventBase_o **)((long)*ppvVar2 + 0x50),
               __this_03 != (UnityEngine_Events_UnityEventBase_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners(__this_03,(MethodInfo *)0x0);
              if (*ppvVar2 != (void *)0x0) {
                __this_05 = *(UnityEngine_Events_UnityEvent_o **)((long)*ppvVar2 + 0x50);
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                  if ((*ppvVar2 != (UnityEngine_Component_o *)0x0) &&
                     (__this_04 = UnityEngine_Component__get_gameObject(*ppvVar2,(MethodInfo *)0x0),
                     __this_04 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(__this_04,true,(MethodInfo *)0x0);
                    if (*ppvVar2 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *)0x0) {
                      Nekki_SF2_GUI_Common_Achievements_AchievementMessage__StartAnimation
                                (*ppvVar2,(MethodInfo *)0x0);
                      return;
                    }
                  }
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


// ===== public void .ctor()  [RVA 0x31D12E4]
// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager$$.ctor @ RVA 0x31D12E4

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager___ctor
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

