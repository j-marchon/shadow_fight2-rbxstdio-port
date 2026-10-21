// Nekki.SF2.GUI.Map.MapButtonsPanel$$UpdateNotificatorState @ RVA 0x3592CC0

void Nekki_SF2_GUI_Map_MapButtonsPanel__UpdateNotificatorState
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,FKNCNNOOOIO_o *MEOCIDLOMGD,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  Nekki_SF2_GUI_Map_MapButton_o *__this_00;
  FKNCNNOOOIO_o *pFVar3;
  System_Collections_Generic_List_MapButton__o *source;
  
  if ((DAT_04568d85 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_MCJHBJAFAKI__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<MapButton>__);
    FUN_01bab630(&System_Func<MapButton,_bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d85 = 1;
  }
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)MEOCIDLOMGD;
    thunk_FUN_01c20e04(pIVar2,MEOCIDLOMGD);
    source = (__this->fields).KMGFNKKPGIH;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<MapButton,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    __this_00 = (Nekki_SF2_GUI_Map_MapButton_o *)
                System_Linq_Enumerable__FirstOrDefault<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                           Method_System_Linq_Enumerable_FirstOrDefault<MapButton>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (((__this_00 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
        (pIVar2->klass != (Il2CppClass *)0x0)) &&
       (pFVar3 = (__this_00->fields).AEPNEAIEKOL, pFVar3 != (FKNCNNOOOIO_o *)0x0)) {
      (pFVar3->fields).IGOGFMFHLNK.fields =
           *(System_Nullable_bool__Fields *)&(pIVar2->klass->_1).events;
      Nekki_SF2_GUI_Map_MapButton__RefreshIndicator(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

