// Nekki.SF2.GUI.Map.DifficultyPanel$$Init @ RVA 0x30F18F0

void Nekki_SF2_GUI_Map_DifficultyPanel__Init
               (Nekki_SF2_GUI_Map_DifficultyPanel_o *__this,float OEBANKNLEMN,MethodInfo *method)

{
  uint uVar1;
  ProgressBar_o *pPVar2;
  Nekki_SF2_GUI_Map_DifficultyPanel_c *method_00;
  MGNDHCBAPEN_string__float__o *item;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_01;
  System_String_array *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_0456642d & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__);
                    /* try { // try from 031f193c to 032f1943 has its CatchHandler @ 031f19a8 */
    DAT_0456642d = 1;
  }
  pPVar2 = (__this->fields)._difficultyBar;
                    /* try { // try from 031f1944 to 032f199b has its CatchHandler @ 031f18ac */
  if (pPVar2 != (ProgressBar_o *)0x0) {
    (*(pPVar2->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,0x42c80000,pPVar2,(pPVar2->klass->vtable)._11_SetValueBorders.method);
    method_00 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo;
    if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (Nekki_SF2_GUI_Map_DifficultyPanel_c *)thunk_FUN_01ba7564();
    }
    item = Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair
                     (OEBANKNLEMN,(MethodInfo *)method_00);
    __this_01 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* try { // try from 031f199c to 032f199f has its CatchHandler @ 031f19a4 */
                    /* try { // try from 031f19a0 to 032f19bf has its CatchHandler @ 031f18ac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f199c with catch @ 031f19a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f193c with catch @ 031f19a8
                        */
      uVar1 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item
                         ,
                         Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__
                        );
      pPVar2 = (__this->fields)._difficultyBar;
      if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* try { // try from 031f19c0 to 032f19c3 has its CatchHandler @ 031f19ec */
        __this_02 = (pPVar2->fields).Stripe;
                    /* try { // try from 031f19c4 to 032f19f3 has its CatchHandler @ 031f18ac */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = BHEDGAKGKPO_TypeInfo->static_fields->IAJCJOECCFO;
        if (pSVar3 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 031f19c0 with catch @ 031f19ec */
          if ((uint)pSVar3->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 031f19f4 to 032f19fb has its CatchHandler @ 031f1a10 */
                    /* try { // try from 031f19fc to 032f1a07 has its CatchHandler @ 031f18ac */
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,pSVar3->m_Items[(int)uVar1],(MethodInfo *)0x0);
                    /* try { // try from 031f1a08 to 032f1a0f has its CatchHandler @ 031f1a10 */
            pPVar2 = (__this->fields)._difficultyBar;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f19f4 with catch @ 031f1a10
                       catch(type#2 @ 00000000) { ... } // from try @ 031f1a08 with catch @ 031f1a10
                        */
            if (((pPVar2 != (ProgressBar_o *)0x0) &&
                ((*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                           (0x42c80000,pPVar2,(pPVar2->klass->vtable)._7_set_Value.method),
                item != (MGNDHCBAPEN_string__float__o *)0x0)) &&
               (__this_00 = (__this->fields)._difficultyLabel,
               __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
              Nekki_SF2_GUI_LabelAlias__set_Alias
                        (__this_00,(item->fields).PHPELPFMOII,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

