// Nekki.SF2.GUI.ResolutionImageSkew$$.ctor @ RVA 0x345111C

void Nekki_SF2_GUI_ResolutionImageSkew___ctor
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045682aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_045682aa = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo,method);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields).super.UseCacheForSingleSprites
       = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).super.UseCacheForSingleSprites,__this_00);
  Nekki_SF2_GUI_ResolutionImage___ctor((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}

