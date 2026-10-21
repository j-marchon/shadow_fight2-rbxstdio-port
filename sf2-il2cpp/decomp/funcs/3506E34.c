// KEIAEKNFNNA$$MGNAAFCFIEH @ RVA 0x3506E34

void KEIAEKNFNNA__MGNAAFCFIEH(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  bool bVar1;
  NCNJEIBHGBH_o *__this_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *source;
  System_Func_FKNCNNOOOIO__bool__o **ppSVar2;
  FKNCNNOOOIO_o *MEOCIDLOMGD;
  long lVar3;
  MethodInfo *method_00;
  UnityEngine_Object_o *exists;
  System_Func_FKNCNNOOOIO__bool__o *predicate;
  System_Nullable_bool__Fields local_34 [2];
  
  if ((DAT_045688a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<FKNCNNOOOIO>__);
    FUN_01bab630(&System_Func<FKNCNNOOOIO,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&Method_KEIAEKNFNNA_<>c_IPGKKCHGFCJ__);
    FUN_01bab630(&KEIAEKNFNNA_<>c_TypeInfo);
    DAT_045688a8 = 1;
  }
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NCNJEIBHGBH_o *)0x0) {
    source = NCNJEIBHGBH__LFPJPIDMDPF(__this_00,(MethodInfo *)0x0);
    if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
    }
    predicate = KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__26_0;
    if (predicate == (System_Func_FKNCNNOOOIO__bool__o *)0x0) {
      if ((KEIAEKNFNNA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KEIAEKNFNNA_<>c_TypeInfo);
      }
      predicate = (System_Func_FKNCNNOOOIO__bool__o *)
                  thunk_FUN_01bda818(System_Func<FKNCNNOOOIO,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &KEIAEKNFNNA_<>c_TypeInfo->static_fields->__9__26_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    MEOCIDLOMGD = (FKNCNNOOOIO_o *)
                  System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_FirstOrDefault<FKNCNNOOOIO>__);
    if (MEOCIDLOMGD != (FKNCNNOOOIO_o *)0x0) {
      bVar1 = KEIAEKNFNNA__GBHJAGECFAB(__this,method_00);
      local_34[0].hasValue = false;
      local_34[0].value = false;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)SUB82(local_34,0),bVar1,
                 Method_System_Nullable<bool>__ctor__);
      (MEOCIDLOMGD->fields).IGOGFMFHLNK.fields = local_34[0];
    }
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if ((bVar1) && (MEOCIDLOMGD != (FKNCNNOOOIO_o *)0x0)) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
          (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03607058;
      Nekki_SF2_GUI_Map_MapScene__UpdateNotificatorState
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),MEOCIDLOMGD,
                 (MethodInfo *)0x0);
    }
    return;
  }
LAB_03607058:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

