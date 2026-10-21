// UIPoligon$$.ctor @ RVA 0x30F97B0

void UIPoligon___ctor(UIPoligon_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields __this_00;
  UnityEngine_Vector2_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456648c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
    DAT_0456648c = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Vector2_Fields)
              thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo,method);
  System_Collections_Generic_List<Vector2>___ctor
            ((System_Collections_Generic_List_Vector2__o *)__this_00,
             Method_System_Collections_Generic_List<Vector2>__ctor__);
  pUVar1 = &(__this->fields).super.INCPCFENLPJ;
  pUVar1->fields = __this_00;
  thunk_FUN_01c20e04(pUVar1,__this_00);
  *(undefined1 *)&(__this->fields)._Points = 1;
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

