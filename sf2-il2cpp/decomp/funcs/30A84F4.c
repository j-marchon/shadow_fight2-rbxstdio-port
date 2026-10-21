// Nekki.SF2.GUI.Fight.ScreenFight$$CreateEnemiesScreen @ RVA 0x30A84F4

void Nekki_SF2_GUI_Fight_ScreenFight__CreateEnemiesScreen
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t DPJIDNBJIBG,
               bool CGMFGFBHMHK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar4;
  
  if ((DAT_0456618b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EnemiesScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenFight_MHKDEDJMKLF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456618b = 1;
  }
  (__this->fields).Type = 8;
  x = (UnityEngine_Object_o *)(__this->fields).enemiesScreenPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,0.0,method_00);
    return;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).enemiesScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<EnemiesScreen>__);
      ppNVar4 = &(__this->fields).MNMBNBKMJOF;
      *ppNVar4 = pNVar3;
      thunk_FUN_01c20e04(ppNVar4,pNVar3);
      if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
        __this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
          if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
            Nekki_SF2_GUI_Fight_EnemiesScreen__Init
                      (*ppNVar4,DFGLEOANOFI,DPJIDNBJIBG,CGMFGFBHMHK,StringLiteral_1,
                       (MethodInfo *)0x0);
                    /* try { // try from 031a86a4 to 032a86ab has its CatchHandler @ 031a8a94 */
            if (*ppNVar4 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
              Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE
                        (__this,((*ppNVar4)->fields).ACFFOAPPNBD,method_01);
                    /* try { // try from 031a86b8 to 032a86df has its CatchHandler @ 031a8a9c */
              __this_01 = (__this->fields).OnStopScreen;
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
                    /* try { // try from 031a86e0 to 032a86fb has its CatchHandler @ 031a8a8c */
              UnityEngine_Events_UnityAction<Int32Enum>___ctor();
              if (__this_01 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
                UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                           Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_AddListener__);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031a8714 to 032a871b has its CatchHandler @ 031a8a74 */
  FUN_01bab8c8();
}

