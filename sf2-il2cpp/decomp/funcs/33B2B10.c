// Nekki.SF2.GUI.Map.ContentToggle$$GGCAOINEJOF @ RVA 0x33B2B10

void Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  int index;
  int32_t index_00;
  int iVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_KCEKMOECEJK__o **ppSVar5;
  VirtualInvokeData *pVVar6;
  KCEKMOECEJK_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  KCEKMOECEJK_o **ppKVar10;
  KCEKMOECEJK_o *pKVar11;
  KCEKMOECEJK_o **ppKVar12;
  System_Action_KCEKMOECEJK__o *action;
  
  if ((DAT_04567d58 & 1) == 0) {
    FUN_01bab630(&System_Action<KCEKMOECEJK>_TypeInfo);
    FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_<>c_FCFHJBGPAHO__);
                    /* try { // try from 034b2b7c to 035b2ba3 has its CatchHandler @ 034b4b78 */
    FUN_01bab630(&Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo);
    DAT_04567d58 = 1;
  }
  pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    index_00 = (__this->fields).FDGAGAEIAOO;
    iVar1 = (pSVar3->fields)._size;
    pIVar4 = System_Collections_Generic_List<object>__get_Item
                       (pSVar3,index_00,
                        Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
    ppKVar10 = &(__this->fields).BBODGCMLKFP;
    *ppKVar10 = (KCEKMOECEJK_o *)pIVar4;
    thunk_FUN_01c20e04(ppKVar10,pIVar4);
    pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 034b2bd8 to 035b2c03 has its CatchHandler @ 034b4b74 */
      index = index_00 + 1;
      if (iVar1 <= index) {
        index = 0;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         (pSVar3,index,
                          Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
      ppKVar12 = &(__this->fields).BPPDIBOOOLP;
      *ppKVar12 = (KCEKMOECEJK_o *)pIVar4;
      thunk_FUN_01c20e04(ppKVar12,pIVar4);
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
      if ((Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->static_fields->__9__12_0;
      if (action == (System_Action_KCEKMOECEJK__o *)0x0) {
        if ((Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034b2c38 to 035b2c43 has its CatchHandler @ 034b4a9c */
        action = (System_Action_KCEKMOECEJK__o *)
                 thunk_FUN_01bda818(System_Action<KCEKMOECEJK>_TypeInfo);
                    /* try { // try from 034b2c54 to 035b2c5b has its CatchHandler @ 034b4a90 */
        System_Action<object>___ctor();
                    /* try { // try from 034b2c64 to 035b2c6b has its CatchHandler @ 034b4a74 */
        ppSVar5 = &Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->static_fields->__9__12_0;
        *ppSVar5 = action;
        thunk_FUN_01c20e04(ppSVar5,action);
      }
      if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 034b2c7c to 035b2c8b has its CatchHandler @ 034b4a7c */
        System_Collections_Generic_List<object>__ForEach
                  (pSVar3,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<KCEKMOECEJK>_ForEach__);
        pKVar11 = *ppKVar10;
        if (pKVar11 != (KCEKMOECEJK_o *)0x0) {
                    /* try { // try from 034b2c98 to 035b2c9f has its CatchHandler @ 034b49ec */
          pKVar7 = pKVar11->klass;
          uVar2._0_1_ = (pKVar7->_2).rank;
          uVar2._1_1_ = (pKVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
                    /* try { // try from 034b2ca8 to 035b2caf has its CatchHandler @ 034b49a8 */
          if (uVar8 != 0) {
                    /* try { // try from 034b2cb0 to 035b2ccf has its CatchHandler @ 034b4a80 */
            piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b2cec to 035b2cf3 has its CatchHandler @ 034b497c */
                pVVar6 = pKVar7->vtable + (*piVar9 + 1);
                goto LAB_034b2cf0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KCEKMOECEJK_TypeInfo,1);
                    /* try { // try from 034b2cdc to 035b2ce3 has its CatchHandler @ 034b49f8 */
LAB_034b2cf0:
                    /* try { // try from 034b2cf4 to 035b2d13 has its CatchHandler @ 034b4a78 */
                    /* WARNING: Could not recover jumptable at 0x034b2d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar6->methodPtr)(0x3f800000,pKVar11,pVVar6->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

