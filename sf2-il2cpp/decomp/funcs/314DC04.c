// Nekki.SF2.GUI.ModuleHolder$$ActiveModules @ RVA 0x314DC04

System_Collections_Generic_List_UIModule__o *
Nekki_SF2_GUI_ModuleHolder__ActiveModules(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *LKFALEIFDIO;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667df & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIModule>_TypeInfo);
    DAT_045667df = 1;
    method = extraout_x1;
  }
  LKFALEIFDIO = (System_Collections_Generic_List_UIModule__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM((__this->fields).LPIPKHINEJH,LKFALEIFDIO,in_x2);
  Nekki_SF2_GUI_ModuleHolder__JLJABEJHDOM((__this->fields).FAGFCHOFHPG,LKFALEIFDIO,in_x2);
  return LKFALEIFDIO;
}

