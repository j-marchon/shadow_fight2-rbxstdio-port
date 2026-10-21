// UIFigures.UISkewRect$$.ctor @ RVA 0x32B7E60

void UIFigures_UISkewRect___ctor(UIFigures_UISkewRect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  float *pfVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567467 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_04567467 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo,method);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  pfVar1 = &(__this->fields)._SkewAngle;
  *(System_Collections_Generic_List_UIVertex__o **)pfVar1 = __this_00;
  thunk_FUN_01c20e04(pfVar1,__this_00);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

