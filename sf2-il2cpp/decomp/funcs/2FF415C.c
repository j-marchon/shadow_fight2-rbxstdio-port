// Nekki.SF2.GUI.Scenes.LoaderScreen$$MEJGJEGFCJF @ RVA 0x2FF415C

System_String_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__MEJGJEGFCJF
          (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Func_TSource__bool__o *predicate;
  
                    /* try { // try from 030f415c to 031f415f has its CatchHandler @ 030f4160 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f415c with catch @ 030f4160
                       try { // try from 030f4160 to 031f417b has its CatchHandler @ 030f4108 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f4130 with catch @ 030f4164
                        */
                    /* try { // try from 030f417c to 031f4193 has its CatchHandler @ 030f4240 */
  if ((DAT_04565a8e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<MGNPHCAAEIO_IEKBEIOCOPO>__);
                    /* try { // try from 030f4194 to 031f41af has its CatchHandler @ 030f4108 */
    FUN_01bab630(&Method_System_Linq_Enumerable_First<MGNPHCAAEIO_IEKBEIOCOPO>__);
    FUN_01bab630(&System_Func<MGNPHCAAEIO_IEKBEIOCOPO,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_FMOGFCGICEL__);
                    /* try { // try from 030f41b0 to 031f41c7 has its CatchHandler @ 030f4240 */
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
                    /* try { // try from 030f41c8 to 031f422f has its CatchHandler @ 030f4108 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565a8e = 1;
  }
  iVar1 = System_Linq_Enumerable__Count<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                     (__this->fields).JPOBFBBGOBC,
                     Method_System_Linq_Enumerable_Count<MGNPHCAAEIO_IEKBEIOCOPO>__);
  if (0 < iVar1) {
    pIVar2 = (Il2CppObject *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Scenes_LoaderScreen_IHIKEPPACNF_TypeInfo);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).JPOBFBBGOBC;
                    /* try { // try from 030f4230 to 031f423f has its CatchHandler @ 030f4240 */
                    /* catch() { ... } // from try @ 030f417c with catch @ 030f4240
                       catch() { ... } // from try @ 030f41b0 with catch @ 030f4240
                       catch() { ... } // from try @ 030f4230 with catch @ 030f4240 */
                    /* try { // try from 030f4244 to 031f4247 has its CatchHandler @ 030f4250 */
    if ((pSVar3 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,
                            (pSVar3->fields)._size + -1,
                            Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_get_Item__
                           ), pIVar4 != (Il2CppObject *)0x0)) {
                    /* try { // try from 030f4248 to 031f4253 has its CatchHandler @ 030f4108 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f4244 with catch @ 030f4250
                        */
      iVar1 = *(int32_t *)&pIVar4[2].monitor;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
      }
      iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0,iVar1,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        *(int32_t *)&pIVar2[1].klass = iVar1;
        pSVar3 = (__this->fields).JPOBFBBGOBC;
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<MGNPHCAAEIO_IEKBEIOCOPO,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pIVar2 = System_Linq_Enumerable__First<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                            Method_System_Linq_Enumerable_First<MGNPHCAAEIO_IEKBEIOCOPO>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar2 = pIVar2 + 1;
          goto LAB_030f42dc;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = (Il2CppObject *)&StringLiteral_1;
LAB_030f42dc:
  return (System_String_o *)pIVar2->klass;
}

