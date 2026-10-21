// Nekki.SF2.GUI.Menu.MainMenu$$ChangeParentAndHideScroll @ RVA 0x356DFEC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,UnityEngine_GameObject_o *HODGKDNOHLP,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  System_Predicate_T__o *match;
  System_String_o *pSVar5;
  System_String_o *str3;
  Il2CppObject *__this_00;
  undefined8 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Object_Fields UVar8;
  UnityEngine_UI_Slider_o *pUVar9;
  int32_t local_34;
  
                    /* try { // try from 0366dff8 to 0376e033 has its CatchHandler @ 036732ec */
  if ((DAT_04568c3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_CPAEMHABKFP__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_TypeInfo);
                    /* try { // try from 0366e048 to 0376e06f has its CatchHandler @ 03673280 */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__);
    FUN_01bab630(&System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366e070 to 0376e073 has its CatchHandler @ 03673308 */
    FUN_01bab630(&StringLiteral_8791);
                    /* try { // try from 0366e084 to 0376e08b has its CatchHandler @ 036731cc */
    FUN_01bab630(&StringLiteral_389);
    DAT_04568c3c = 1;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366e0a4 to 0376e0ab has its CatchHandler @ 036735f8 */
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)HODGKDNOHLP;
    thunk_FUN_01c20e04(pIVar4,HODGKDNOHLP);
                    /* try { // try from 0366e0c0 to 0376e0c7 has its CatchHandler @ 036735f0 */
    if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366e2dc to 0376e2e3 has its CatchHandler @ 03673518 */
      return;
    }
    pUVar9 = (__this->fields).MLLHHEDCFJH;
                    /* try { // try from 0366e0d0 to 0376e0d7 has its CatchHandler @ 036735e4 */
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366e0e4 to 0376e0eb has its CatchHandler @ 036735dc */
    System_Predicate<object>___ctor();
                    /* try { // try from 0366e0f4 to 0376e0fb has its CatchHandler @ 036735f4 */
    if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* try { // try from 0366e0fc to 0376e10b has its CatchHandler @ 036735ec */
      local_34 = System_Collections_Generic_List<object>__RemoveAll
                           ((System_Collections_Generic_List_object__o *)pUVar9,match,
                            Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__
                           );
      if (local_34 != 0) {
                    /* try { // try from 0366e11c to 0376e123 has its CatchHandler @ 036735e0 */
        if (pIVar4->klass == (Il2CppClass *)0x0) goto LAB_0366e2e4;
        pSVar5 = UnityEngine_Object__get_name
                           ((UnityEngine_Object_o *)pIVar4->klass,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    /* try { // try from 0366e138 to 0376e15b has its CatchHandler @ 03673694 */
        pSVar5 = System_String__Concat
                           (StringLiteral_8791,pSVar5,StringLiteral_389,str3,(MethodInfo *)0x0);
                    /* try { // try from 0366e168 to 0376e177 has its CatchHandler @ 036735e8 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
                    /* try { // try from 0366e190 to 0376e193 has its CatchHandler @ 036733a0 */
                    /* try { // try from 0366e194 to 0376e19b has its CatchHandler @ 03673510 */
      pUVar9 = (__this->fields).MLLHHEDCFJH;
                    /* try { // try from 0366e1a0 to 0376e1ab has its CatchHandler @ 0367351c */
      __this_00 = (Il2CppObject *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 0366e1bc to 0376e1c3 has its CatchHandler @ 036733dc */
        __this_00[1].klass = pIVar4->klass;
        thunk_FUN_01c20e04();
        __this_00[1].monitor = IFFKONPAKOP;
        thunk_FUN_01c20e04(&__this_00[1].monitor,IFFKONPAKOP);
        lVar2 = Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_Add__;
                    /* try { // try from 0366e1d4 to 0376e1db has its CatchHandler @ 036733ec */
        if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
          UVar8.m_CachedPtr = (pUVar9->fields).super.super.super.super.super.super.m_CachedPtr;
                    /* try { // try from 0366e1e8 to 0376e1ef has its CatchHandler @ 036733f4 */
          *(int *)((long)&(pUVar9->fields).super.super.super.m_CancellationTokenSource + 4) =
               *(int *)((long)&(pUVar9->fields).super.super.super.m_CancellationTokenSource + 4) + 1
          ;
          if (UVar8.m_CachedPtr != 0) {
            uVar1 = *(uint *)&(pUVar9->fields).super.super.super.m_CancellationTokenSource;
                    /* try { // try from 0366e200 to 0376e207 has its CatchHandler @ 036733e0 */
            if (uVar1 < *(uint *)(UVar8.m_CachedPtr + 0x18)) {
                    /* try { // try from 0366e208 to 0376e21b has its CatchHandler @ 036733f0 */
              *(uint *)&(pUVar9->fields).super.super.super.m_CancellationTokenSource = uVar1 + 1;
              puVar6 = (undefined8 *)(UVar8.m_CachedPtr + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = __this_00;
              thunk_FUN_01c20e04(puVar6,__this_00);
                    /* try { // try from 0366e220 to 0376e22b has its CatchHandler @ 036733e8 */
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pUVar9,__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
                    /* try { // try from 0366e244 to 0376e247 has its CatchHandler @ 03673284 */
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0366e248 to 0376e24b has its CatchHandler @ 03673338 */
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar7,IFFKONPAKOP,false,(MethodInfo *)0x0);
                    /* try { // try from 0366e264 to 0376e26f has its CatchHandler @ 036735b4 */
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(pUVar7,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._backgroundPicture;
                if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e27c to 0376e28b has its CatchHandler @ 036735d8 */
                  CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x0;
                  Util__IHPDCBOFHPA(CMMIJCJOBBF,false,(MethodInfo *)0x0);
                  __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0366e298 to 0376e29f has its CatchHandler @ 0367350c */
                  if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                    iVar3 = NDPMLPGANCI__FFIOCEOHPEM(__this_02,(MethodInfo *)0x0);
                    if (iVar3 != 3) {
                      return;
                    }
                    /* try { // try from 0366e2b0 to 0376e2b7 has its CatchHandler @ 03673520 */
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton(__this,false,method_00);
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar(__this,false,method_00);
                    /* try { // try from 0366e2c4 to 0376e2cb has its CatchHandler @ 036734f8 */
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton(__this,false,method_00);
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
LAB_0366e2e4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366e2e4 to 0376e2f7 has its CatchHandler @ 036734f0 */
  FUN_01bab8c8();
}

