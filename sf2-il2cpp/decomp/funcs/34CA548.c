// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewAngle @ RVA 0x34CA548

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewAngle
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  
  if ((DAT_0456865d & 1) == 0) {
    FUN_01bab630(&System_Action<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_OCOBANABBDH__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
    DAT_0456865d = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(float *)&__this_00[1].klass = JLNCOIIGIDA;
    Nekki_SF2_GUI_Fight_StyleBar__SetSkewBackground(__this,JLNCOIIGIDA,method_00);
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

