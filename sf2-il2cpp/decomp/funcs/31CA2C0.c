// UIFigures.UILine$$.ctor @ RVA 0x31CA2C0

void UIFigures_UILine___ctor(UIFigures_UILine_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Vector2__o *pSVar1;
  bool_conflict *pbVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 032ca2b0 with catch @ 032ca2c8 */
  if ((DAT_04566c5c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
                    /* try { // try from 032ca308 to 033ca32f has its CatchHandler @ 032ca344 */
    DAT_04566c5c = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_Vector2__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo,method);
  System_Collections_Generic_List<Vector2>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Vector2>__ctor__);
  pbVar2 = &(__this->fields)._SingleTexturCord;
  *(System_Collections_Generic_List_Vector2__o **)pbVar2 = pSVar1;
  thunk_FUN_01c20e04(pbVar2,pSVar1);
                    /* try { // try from 032ca330 to 033ca33b has its CatchHandler @ 032c9858 */
  *(undefined4 *)&(__this->fields)._Points = 0x41200000;
                    /* try { // try from 032ca33c to 033ca343 has its CatchHandler @ 032ca344 */
  pSVar1 = (System_Collections_Generic_List_Vector2__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ca308 with catch @ 032ca344
                       catch(type#2 @ 00000000) { ... } // from try @ 032ca33c with catch @ 032ca344
                        */
  System_Collections_Generic_List<Vector2>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Vector2>__ctor__);
  *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._Width = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._Width,pSVar1);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

