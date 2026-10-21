// Nekki.SF2.GUI.Fight.ViewerFight$$DisplayDamage @ RVA 0x35BEE30

void Nekki_SF2_GUI_Fight_ViewerFight__DisplayDamage
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,System_String_o *GIHPFBNPHMP,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  void *pvVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568f04 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_EGOKMGOBBNJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 036bee80 to 037bee87 has its CatchHandler @ 036beedc */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LabelAlias>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 036beea0 to 037beeab has its CatchHandler @ 036beed4 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 036beeac to 037beecb has its CatchHandler @ 036bedf4 */
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04568f04 = 1;
  }
  pNVar7 = (__this->fields)._damageLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036beecc to 037beecf has its CatchHandler @ 036beed8 */
                    /* try { // try from 036beed0 to 037beef3 has its CatchHandler @ 036bedf4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036beea0 with catch @ 036beed4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036beecc with catch @ 036beed8
                        */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bee80 with catch @ 036beedc
                        */
  if (!bVar1) {
    return;
  }
  pNVar7 = (__this->fields)._damageLabel;
  if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 036beef4 to 037beef7 has its CatchHandler @ 036bef20 */
                    /* try { // try from 036beef8 to 037bef2f has its CatchHandler @ 036bedf4 */
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 036beef4 with catch @ 036bef20 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
                    /* try { // try from 036bef30 to 037bef37 has its CatchHandler @ 036bef4c */
    pIVar3 = (Il2CppObject *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_TypeInfo);
                    /* try { // try from 036bef38 to 037bef43 has its CatchHandler @ 036bedf4 */
    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                    /* try { // try from 036bef44 to 037bef4b has its CatchHandler @ 036bef4c */
    pNVar7 = (__this->fields)._damageLabel;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bef30 with catch @ 036bef4c
                       catch(type#2 @ 00000000) { ... } // from try @ 036bef44 with catch @ 036bef4c
                        */
                    /* try { // try from 036bef50 to 037bf037 has its CatchHandler @ 036bef50
                       catch() { ... } // from try @ 036bef50 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf2ec with catch @ 036bef50
                       catch() { ... } // from try @ 036bf358 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf368 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf3c8 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf408 with catch @ 036bef50 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = (Il2CppClass *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar7,Method_UnityEngine_Object_Instantiate<LabelAlias>__);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = pIVar4;
      thunk_FUN_01c20e04(pIVar3,pIVar4);
      if (pIVar3->klass != (Il2CppClass *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._damageLabel;
        if (((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
            (pUVar5 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar2,pUVar5,false,(MethodInfo *)0x0);
          pIVar4 = pIVar3->klass;
          if (pIVar4 != (Il2CppClass *)0x0) {
            pvVar6 = (pIVar4->_1).image;
            (**(code **)((long)pvVar6 + 0x5e8))
                      (pIVar4,GIHPFBNPHMP,*(undefined8 *)((long)pvVar6 + 0x5f0));
            if ((pIVar3->klass != (Il2CppClass *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
              }
              if (pIVar3->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 036bf038 to 037bf03f has its CatchHandler @ 036bf3ac */
                fVar9 = (__this->fields).damageLabelStartY;
                fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
                pUVar2 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  value.fields.y = fVar9;
                  value.fields.x = fVar8;
                  value.fields.z = 0.0;
                    /* try { // try from 036bf064 to 037bf06f has its CatchHandler @ 036bf3a4 */
                  UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
                  LJLLAKHOFFF__IFBBIDIEBEL
                            ((UnityEngine_UI_Graphic_o *)pIVar3->klass,1.0,(MethodInfo *)0x0);
                  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    /* try { // try from 036bf0a0 to 037bf0af has its CatchHandler @ 036bf3a0 */
                  if (pIVar3->klass != (Il2CppClass *)0x0) {
                    pUVar2 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
                    t = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                                  (pUVar2,(__this->fields).damageLabelEndY,
                                   (__this->fields).damageLabelMoveDuration,false,(MethodInfo *)0x0)
                    ;
                    t_00 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                     ((Il2CppObject *)t,1,
                                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                     );
                    DG_Tweening_TweenSettingsExtensions__Append(s,t_00,(MethodInfo *)0x0);
                    callback = (DG_Tweening_TweenCallback_o *)
                               thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 036bf10c to 037bf113 has its CatchHandler @ 036bf37c */
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__AppendCallback
                              (s,callback,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

