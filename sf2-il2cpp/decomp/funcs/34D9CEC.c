// UIFigures.UIRoundRectBorder$$.ctor @ RVA 0x34D9CEC

void UIFigures_UIRoundRectBorder___ctor(UIFigures_UIRoundRectBorder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((DAT_04568703 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_04568703 = 1;
    method = extraout_x1;
  }
  auVar1 = NEON_fmov(0x41200000,4);
  uVar2 = NEON_fmov(0x41200000,4);
  (__this->fields)._Width = (float)(int)auVar1._8_8_;
  (__this->fields)._ChangeAllRadius = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields).super.INCPCFENLPJ.fields = auVar1._0_8_;
  (__this->fields).KEFJIOPNNFG = (float)(int)uVar2;
  (__this->fields)._RadiusUpLeft = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._RadiusUpRight = 10.0;
  (__this->fields)._RadiusBottomRight = 1.4013e-44;
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo,method);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields)._RadiusBottomLeft = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._RadiusBottomLeft,__this_00);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

