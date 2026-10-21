// UIFigures.UIFrameRectBorder$$.ctor @ RVA 0x34B45C4

void UIFigures_UIFrameRectBorder___ctor(UIFigures_UIFrameRectBorder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Vector2__o *__this_00;
  float *pfVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568575 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
    DAT_04568575 = 1;
    method = extraout_x1;
  }
  (__this->fields).super.INCPCFENLPJ.fields.y = 10.0;
  __this_00 = (System_Collections_Generic_List_Vector2__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo,method);
  System_Collections_Generic_List<Vector2>___ctor
            (__this_00,Method_System_Collections_Generic_List<Vector2>__ctor__);
  pfVar1 = &(__this->fields)._AngelSize;
  *(System_Collections_Generic_List_Vector2__o **)pfVar1 = __this_00;
  thunk_FUN_01c20e04(pfVar1,__this_00);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

