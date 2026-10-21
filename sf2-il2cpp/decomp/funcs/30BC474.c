// Nekki.SF2.GUI.Common.SceneMenuScroll$$.ctor @ RVA 0x30BC474

void Nekki_SF2_GUI_Common_SceneMenuScroll___ctor
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o **ppNVar1;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_DBMPKPJGIPI__o **ppSVar2;
  System_Collections_Generic_List_SceneSelector__o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_SceneSelector__o **ppSVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_0456624a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<SceneSelector>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456624a = 1;
    method = extraout_x1;
  }
  (__this->fields)._AnimationDuration = 0.5;
  (__this->fields)._AnimationEase = 1;
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields)._OnStateChanged;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DBMPKPJGIPI>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_01,Method_System_Collections_Generic_List<DBMPKPJGIPI>__ctor__);
  ppSVar2 = &(__this->fields).BNLLNJDLGJB;
  *ppSVar2 = (System_Collections_Generic_List_DBMPKPJGIPI__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_SceneSelector__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<SceneSelector>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<SceneSelector>__ctor__);
  ppSVar3 = &(__this->fields).FGIFPAPGJJN;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  (__this->fields).IAAABJBDEMK = 3;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

