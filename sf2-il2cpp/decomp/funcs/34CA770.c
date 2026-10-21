// Nekki.SF2.GUI.Fight.StyleBar$$SetValue @ RVA 0x34CA770

void Nekki_SF2_GUI_Fight_StyleBar__SetValue
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  
  if ((DAT_04568660 & 1) == 0) {
    FUN_01bab630(&System_Action<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_IKLHIKJBCKC__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
    DAT_04568660 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(float *)&__this_00[1].klass = CJNHFNHJHPE;
    *(int32_t *)((long)&__this_00[1].klass + 4) = ABKNPBMGHKH;
    __this_01 = (__this->fields).CIKMDLPKCCF;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<StyleBarStrip>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

