// TypeDefIndex 504
// Namespace: 
// public class EnterScreen : MonoBehaviour
// Fields:
//   public float MIN_OPACITY; // 0x20
//   public float MAX_OPACITY; // 0x24
//   public float fadeTime; // 0x28
//   public float expandTime; // 0x2C
//   public float hideTime; // 0x30
//   public float endTime; // 0x34
//   private LabelAlias _label; // 0x38
//   private ResolutionImage _backgroundLeft; // 0x40
//   private ResolutionImage _backgroundRight; // 0x48
//   private Image _foreground; // 0x50
//   private Action DNPHBCPFMPB; // 0x58
//   private float JDFNMBMELNK; // 0x60
//   private float JHNDMAAHCPK; // 0x64
//   private static List<EnterScreen> PHPCCHBPFNA; // 0x0

// ===== public void .ctor()  [RVA 0x358A904]
// EnterScreen$$.ctor @ RVA 0x358A904

void EnterScreen___ctor(EnterScreen_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a8ec with catch @ 0368a904
                        */
  auVar1 = NEON_fmov(0x3f800000,4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a8e8 with catch @ 0368a908
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a834 with catch @ 0368a90c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a820 with catch @ 0368a910
                        */
  (__this->fields).expandTime = (float)(int)auVar1._8_8_;
  (__this->fields).hideTime = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields).MAX_OPACITY = (float)(int)auVar1._0_8_;
  (__this->fields).fadeTime = (float)(int)((ulong)auVar1._0_8_ >> 0x20);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a7f4 with catch @ 0368a914
                        */
  (__this->fields).endTime = 1.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a798 with catch @ 0368a918
                        */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool ExistsAnyEnterScreen()  [RVA 0x358A91C]
// EnterScreen$$ExistsAnyEnterScreen @ RVA 0x358A91C

bool EnterScreen__ExistsAnyEnterScreen(MethodInfo *method)

{
  bool bVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a840 with catch @ 0368a91c
                        */
                    /* try { // try from 0368a92c to 0378a92f has its CatchHandler @ 0368a940 */
  if ((DAT_04568d37 & 1) == 0) {
                    /* catch() { ... } // from try @ 0368a92c with catch @ 0368a940 */
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<EnterScreen>__);
    FUN_01bab630(&EnterScreen_TypeInfo);
    DAT_04568d37 = 1;
  }
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368a978 to 0378a99f has its CatchHandler @ 0368a9b4 */
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)
                     EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA,
                     Method_DJNBJHPDKDP_OBECCOPBADO<EnterScreen>__);
  return (bool)(~bVar1 & 1);
}


// ===== public void Init(string EHNFGMGKCHO, Action IELDNEAAPBE)  [RVA 0x358A998]
// EnterScreen$$Init @ RVA 0x358A998

void EnterScreen__Init(EnterScreen_o *__this,System_String_o *EHNFGMGKCHO,
                      System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  DG_Tweening_TweenCallback_o *pDVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_Action_o **ppSVar5;
  
                    /* try { // try from 0368a9a0 to 0378a9ab has its CatchHandler @ 0368a65c */
                    /* try { // try from 0368a9ac to 0378a9b3 has its CatchHandler @ 0368a9b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368a978 with catch @ 0368a9b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0368a9ac with catch @ 0368a9b4
                        */
                    /* try { // try from 0368a9b8 to 0378aaeb has its CatchHandler @ 0368a9b8
                       catch() { ... } // from try @ 0368a9b8 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ab70 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368abd8 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ac10 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ac9c with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368aca4 with catch @ 0368a9b8
                       catch() { ... } // from try @ 0368ad40 with catch @ 0368a9b8 */
  if ((DAT_04568d38 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_BFGDICLDJLE__);
    FUN_01bab630(&Method_EnterScreen_JPPDAADCIHJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d38 = 1;
  }
  ppSVar5 = &(__this->fields).DNPHBCPFMPB;
  *ppSVar5 = IELDNEAAPBE;
  thunk_FUN_01c20e04(ppSVar5,IELDNEAAPBE);
  pNVar4 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_03 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._label;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_03 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,EHNFGMGKCHO,(MethodInfo *)0x0);
  }
  EnterScreen__SetVisible(__this,false,method_03);
  EnterScreen__PIJGMPKNCHJ(__this,method_00);
  EnterScreen__IJAKFBFEJPD(__this,(__this->fields).MIN_OPACITY,method_01);
  t = EnterScreen__MuteMusicSequence(__this,method_02);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                      (__this->fields).fadeTime,(MethodInfo *)0x0);
                    /* try { // try from 0368aaec to 0378ab13 has its CatchHandler @ 0368acbc */
  DG_Tweening_TweenSettingsExtensions__Join(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MIN_OPACITY,
                      (__this->fields).expandTime,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
                    /* try { // try from 0368ab48 to 0378ab6f has its CatchHandler @ 0368acb4 */
  DG_Tweening_TweenSettingsExtensions__AppendInterval(s,(__this->fields).hideTime,(MethodInfo *)0x0)
  ;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                      (__this->fields).endTime,(MethodInfo *)0x0);
                    /* try { // try from 0368ab70 to 0378abc7 has its CatchHandler @ 0368a9b8 */
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
  return;
}


// ===== private void MLEALBBBJKF(float KEFILECBPMF)  [RVA 0x358AFF8]
// EnterScreen$$MLEALBBBJKF @ RVA 0x358AFF8

void EnterScreen__MLEALBBBJKF(EnterScreen_o *__this,float KEFILECBPMF,MethodInfo *method)

{
  FUN_03f936d0(DAT_04568d39);
  return;
}


// ===== private static void .cctor()  [RVA 0x358B060]
// EnterScreen$$.cctor @ RVA 0x358B060

void EnterScreen___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_EnterScreen__o *__this;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368b050 with catch @ 0368b060
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368b048 with catch @ 0368b064
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aef0 with catch @ 0368b068
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368af70 with catch @ 0368b06c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ae94 with catch @ 0368b070
                        */
                    /* try { // try from 0368b080 to 0378b083 has its CatchHandler @ 0368b094 */
  if ((DAT_04568d3a & 1) == 0) {
                    /* catch() { ... } // from try @ 0368b080 with catch @ 0368b094 */
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EnterScreen>_TypeInfo);
    DAT_04568d3a = 1;
  }
  __this = (System_Collections_Generic_List_EnterScreen__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<EnterScreen>_TypeInfo);
                    /* try { // try from 0368b0cc to 0378b0f3 has its CatchHandler @ 0368b108 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<EnterScreen>__ctor__);
  EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA = __this;
                    /* try { // try from 0368b0f4 to 0378b0ff has its CatchHandler @ 0368ad58 */
  thunk_FUN_01c20e04(EnterScreen_TypeInfo->static_fields,__this);
  return;
}


// ===== private void BFGDICLDJLE()  [RVA 0x358B0F8]
// EnterScreen$$BFGDICLDJLE @ RVA 0x358B0F8

void EnterScreen__BFGDICLDJLE(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* try { // try from 0368b100 to 0378b107 has its CatchHandler @ 0368b108 */
  EnterScreen__ODFHMBHFNJB(__this,method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368b0cc with catch @ 0368b108
                       catch(type#2 @ 00000000) { ... } // from try @ 0368b100 with catch @ 0368b108
                        */
  EnterScreen__SetVisible(__this,true,in_x2);
  return;
}


// ===== public void Init(List<KeyValuePair<string, int>> FCOIPKFOGMM, Action IELDNEAAPBE)  [RVA 0x358B220]
// EnterScreen$$Init @ RVA 0x358B220

void EnterScreen__Init(EnterScreen_o *__this,
                      System_Collections_Generic_List_KeyValuePair_string__int___o *FCOIPKFOGMM,
                      System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  bool bVar1;
  System_Action_o **ppSVar2;
  DG_Tweening_Sequence_o *s;
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_o *pDVar3;
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o *s_00;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *method_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  System_Collections_Generic_KeyValuePair_object__int__o SVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  void *pvStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  void *pvStack_68;
  
  method_03 = IELDNEAAPBE;
  if ((DAT_04568d3b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_KLPJJMFGIEE__);
    FUN_01bab630(&Method_EnterScreen_PCHKDCLPPLN__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_get_Current__
                );
    FUN_01bab630(&Method_EnterScreen_IENCLOKOKOB_GGHMAENCKCH__);
    FUN_01bab630(&EnterScreen_IENCLOKOKOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d3b = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pvStack_68 = (void *)0x0;
  local_80.fields._current = (Il2CppObject *)0x0;
  ppSVar2 = &(__this->fields).DNPHBCPFMPB;
  *ppSVar2 = IELDNEAAPBE;
  thunk_FUN_01c20e04(ppSVar2,IELDNEAAPBE);
  EnterScreen__SetVisible(__this,false,(MethodInfo *)method_03);
  EnterScreen__PIJGMPKNCHJ(__this,method_00);
  EnterScreen__IJAKFBFEJPD(__this,(__this->fields).MIN_OPACITY,method_01);
  pNVar5 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (FCOIPKFOGMM == (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0)
    goto LAB_0368b618;
    if (0 < (FCOIPKFOGMM->fields)._size) {
      pNVar5 = (__this->fields)._label;
      SVar6 = System_Collections_Generic_List<KeyValuePair<object,_int>>__get_Item
                        ((System_Collections_Generic_List_T__o *)FCOIPKFOGMM,0,
                         Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Item__
                        );
      if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0368b618;
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar5,(System_String_o *)SVar6.fields.key,(MethodInfo *)0x0);
    }
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.0,(MethodInfo *)0x0);
  if (FCOIPKFOGMM != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<object,_int>>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_T__o *)FCOIPKFOGMM,
               Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_GetEnumerator__);
    local_80.fields._index = local_a0.fields._index;
    local_80.fields._version = local_a0.fields._version;
    local_80.fields._list = local_a0.fields._list;
    pvStack_68 = pvStack_88;
    local_80.fields._current = local_a0.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_int>>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<object,_int>>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_Dispose__
                  );
        t = EnterScreen__MuteMusicSequence(__this,method_02);
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
        }
        s_00 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s_00,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0)
        ;
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                            (__this->fields).fadeTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Join
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        pDVar3 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(s_00,pDVar3,(MethodInfo *)0x0);
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MIN_OPACITY,
                            (__this->fields).expandTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s_00,(DG_Tweening_Tween_o *)s,(MethodInfo *)0x0)
        ;
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                            (__this->fields).endTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        pDVar3 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(s_00,pDVar3,(MethodInfo *)0x0);
        return;
      }
      __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EnterScreen_IENCLOKOKOB_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Il2CppObject *)0x0) break;
      __this_00[2].klass = (Il2CppClass *)__this;
      thunk_FUN_01c20e04(__this_00 + 2,__this);
      __this_00[1].monitor = pvStack_68;
      __this_00[1].klass = (Il2CppClass *)local_80.fields._current;
      thunk_FUN_01c20e04(__this_00 + 1,0);
      pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                (s,(float)*(int *)&__this_00[1].monitor / 60.0,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0368b618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetVisible(bool CJNHFNHJHPE)  [RVA 0x358ABB8]
// EnterScreen$$SetVisible @ RVA 0x358ABB8

void EnterScreen__SetVisible(EnterScreen_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
                    /* try { // try from 0368abc8 to 0378abd7 has its CatchHandler @ 0368acb8 */
                    /* try { // try from 0368abd8 to 0378ac03 has its CatchHandler @ 0368a9b8 */
  if ((DAT_04568d3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d3c = 1;
  }
  pNVar3 = (__this->fields)._backgroundLeft;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0368ac04 to 0378ac0f has its CatchHandler @ 0368acb8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368ac10 to 0378ac97 has its CatchHandler @ 0368a9b8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._backgroundLeft;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368ace8;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._backgroundRight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._backgroundRight;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368ace8;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368ac98 to 0378ac9b has its CatchHandler @ 0368acb0 */
                    /* try { // try from 0368ac9c to 0378ac9f has its CatchHandler @ 0368a9b8 */
                    /* try { // try from 0368aca0 to 0378aca3 has its CatchHandler @ 0368acac */
                    /* try { // try from 0368aca4 to 0378accb has its CatchHandler @ 0368a9b8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* catch() { ... } // from try @ 0368accc with catch @ 0368ace0 */
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aca0 with catch @ 0368acac
                        */
  pNVar4 = (__this->fields)._label;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ac98 with catch @ 0368acb0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ab48 with catch @ 0368acb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368abc8 with catch @ 0368acb8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0368ac04 with catch @ 0368acb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aaec with catch @ 0368acbc
                        */
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0368accc to 0378accf has its CatchHandler @ 0368ace0 */
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_0368ace8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PIJGMPKNCHJ()  [RVA 0x358ACEC]
// EnterScreen$$PIJGMPKNCHJ @ RVA 0x358ACEC

void EnterScreen__PIJGMPKNCHJ(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  float fVar1;
  
  if ((DAT_04568d3d & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 0368ad18 to 0378ad3f has its CatchHandler @ 0368ad54 */
    DAT_04568d3d = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565f32 == '\0') {
                    /* try { // try from 0368ad40 to 0378ad4b has its CatchHandler @ 0368a9b8 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 0368ad4c to 0378ad53 has its CatchHandler @ 0368ad54 */
    DAT_04565f32 = '\x01';
    method = extraout_x1_01;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368ad18 with catch @ 0368ad54
                       catch(type#2 @ 00000000) { ... } // from try @ 0368ad4c with catch @ 0368ad54
                        */
                    /* try { // try from 0368ad58 to 0378ae93 has its CatchHandler @ 0368ad58
                       catch() { ... } // from try @ 0368ad58 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368afb4 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b04c with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b054 with catch @ 0368ad58
                       catch() { ... } // from try @ 0368b0f4 with catch @ 0368ad58 */
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    }
    if (DAT_045677bf == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045677bf = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar1 = PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
    (__this->fields).JDFNMBMELNK = fVar1;
    (__this->fields).JHNDMAAHCPK = fVar1;
  }
  return;
}


// ===== private void PCHKDCLPPLN()  [RVA 0x358B6A4]
// EnterScreen$$PCHKDCLPPLN @ RVA 0x358B6A4

void EnterScreen__PCHKDCLPPLN(EnterScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Action_o *pSVar1;
  
  if ((DAT_04568d44 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_04568d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).DNPHBCPFMPB;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== private void KLPJJMFGIEE()  [RVA 0x358B7A8]
// EnterScreen$$KLPJJMFGIEE @ RVA 0x358B7A8

void EnterScreen__KLPJJMFGIEE(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  EnterScreen__ODFHMBHFNJB(__this,method);
  EnterScreen__SetVisible(__this,true,in_x2);
  return;
}


// ===== public static EnterScreen Create()  [RVA 0x358B7C4]
// EnterScreen$$Create @ RVA 0x358B7C4

EnterScreen_o * EnterScreen__Create(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *original;
  EnterScreen_o *item;
  System_Collections_Generic_List_EnterScreen__o *__this;
  EnterScreen_array *pEVar3;
  
  if ((DAT_04568d3e & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<EnterScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<EnterScreen>__);
    FUN_01bab630(&StringLiteral_10406/*"Prefabs/Map/EnterScreen"*/);
    DAT_04568d3e = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10406/*"Prefabs/Map/EnterScreen"*/,Method_UnityEngine_Resources_Load<EnterScreen>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  item = (EnterScreen_o *)
         UnityEngine_Object__Instantiate<object>
                   (original,Method_UnityEngine_Object_Instantiate<EnterScreen>__);
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EnterScreen_TypeInfo);
  }
  lVar2 = Method_System_Collections_Generic_List<EnterScreen>_Add__;
  __this = EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA;
  if (__this != (System_Collections_Generic_List_EnterScreen__o *)0x0) {
    pEVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pEVar3 != (EnterScreen_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pEVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pEVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04(pEVar3->m_Items + (int)uVar1,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return item;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JPPDAADCIHJ()  [RVA 0x358B928]
// EnterScreen$$JPPDAADCIHJ @ RVA 0x358B928

void EnterScreen__JPPDAADCIHJ(EnterScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Action_o *pSVar1;
  
  if ((DAT_04568d44 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_04568d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).DNPHBCPFMPB;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== private float DLFIDGMIDHC()  [RVA 0x358B92C]
// EnterScreen$$DLFIDGMIDHC @ RVA 0x358B92C

float EnterScreen__DLFIDGMIDHC(EnterScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).JHNDMAAHCPK;
}


// ===== private void OnDestroy()  [RVA 0x358B934]
// EnterScreen$$OnDestroy @ RVA 0x358B934

void EnterScreen__OnDestroy(EnterScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  System_Collections_Generic_List_EnterScreen__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568d3f & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>_Remove__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568d3f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat != false)
  {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    }
    pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_0368ba0c;
    (*(pNVar1->klass->vtable)._20_Show.methodPtr)(pNVar1,(pNVar1->klass->vtable)._20_Show.method);
    method = extraout_x1_01;
  }
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EnterScreen_TypeInfo,method);
  }
  __this_00 = EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA;
  if (__this_00 != (System_Collections_Generic_List_EnterScreen__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<EnterScreen>_Remove__);
    return;
  }
LAB_0368ba0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IJAKFBFEJPD(float BCEJOJECHDA)  [RVA 0x358ADC8]
// EnterScreen$$IJAKFBFEJPD @ RVA 0x358ADC8

void EnterScreen__IJAKFBFEJPD(EnterScreen_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((DAT_04568d40 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d40 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._foreground;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._foreground;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
      pUVar2 = (__this->fields)._foreground;
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void Awake()  [RVA 0x358BA10]
// EnterScreen$$Awake @ RVA 0x358BA10

void EnterScreen__Awake(EnterScreen_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__KJGGEPNHOBK(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDFOKAPCPLD()  [RVA 0x358BA30]
// EnterScreen$$NDFOKAPCPLD @ RVA 0x358BA30

void EnterScreen__NDFOKAPCPLD(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  float CJNHFNHJHPE;
  
  if ((DAT_04568d41 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04568d41 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (__this->fields).JDFNMBMELNK;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__GJBPODCHLNP(CJNHFNHJHPE,(MethodInfo *)0x0);
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
  return;
}


// ===== private void ODFHMBHFNJB()  [RVA 0x358B114]
// EnterScreen$$ODFHMBHFNJB @ RVA 0x358B114

void EnterScreen__ODFHMBHFNJB(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  float CJNHFNHJHPE;
  
  if ((DAT_04568d42 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_16290/*"act"*/);
    DAT_04568d42 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_01;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK != false) {
    return;
  }
  CJNHFNHJHPE = (__this->fields).JDFNMBMELNK;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__GJBPODCHLNP(CJNHFNHJHPE,(MethodInfo *)0x0);
  PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
  MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
  MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_16290/*"act"*/,false,(MethodInfo *)0x0);
  return;
}


// ===== public Sequence MuteMusicSequence()  [RVA 0x358AE80]
// EnterScreen$$MuteMusicSequence @ RVA 0x358AE80

DG_Tweening_Sequence_o * EnterScreen__MuteMusicSequence(EnterScreen_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0368ae94 to 0378aebb has its CatchHandler @ 0368b070 */
  if ((DAT_04568d43 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_DLFIDGMIDHC__);
    FUN_01bab630(&Method_EnterScreen_MLEALBBBJKF__);
    FUN_01bab630(&Method_EnterScreen_NDFOKAPCPLD__);
                    /* try { // try from 0368aef0 to 0378af17 has its CatchHandler @ 0368b068 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d43 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
  DG_Tweening_Core_DOGetter<float>___ctor();
                    /* try { // try from 0368af70 to 0378afb3 has its CatchHandler @ 0368b06c */
  setter = (DG_Tweening_Core_DOSetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
  DG_Tweening_Core_DOSetter<float>___ctor();
  t = DG_Tweening_DOTween__To(getter,setter,0.0,(__this->fields).fadeTime,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
                    /* try { // try from 0368afb4 to 0378b047 has its CatchHandler @ 0368ad58 */
  callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(s,callback,(MethodInfo *)0x0);
  return s;
}


// ===== public void End()  [RVA 0x358B6A8]
// EnterScreen$$End @ RVA 0x358B6A8

void EnterScreen__End(EnterScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Action_o *pSVar1;
  
  if ((DAT_04568d44 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_04568d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).DNPHBCPFMPB;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}

