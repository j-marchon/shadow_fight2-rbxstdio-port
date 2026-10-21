// CAAJMGKIPIE$$BKAIGLDAJPC @ RVA 0x3002F54

int32_t CAAJMGKIPIE__BKAIGLDAJPC
                  (CAAJMGKIPIE_o *__this,System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD
                  ,ECENNHNBAME_o *LFDMFHFMPFA,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  ECENNHNBAME_o *pEVar1;
  FHHDFKADHEI_o *method_00;
  int iVar2;
  int index;
  float fVar3;
  float fVar4;
  
  method_00 = MJEOBEDMNHL;
  if ((DAT_04565b2b & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_04565b2b = 1;
  }
  if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    if (0 < (ELAGKBMJCOD->fields)._size) {
      iVar2 = 0;
      fVar4 = 0.0;
      do {
        pEVar1 = (ECENNHNBAME_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,iVar2,
                            Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        if (pEVar1 == (ECENNHNBAME_o *)0x0 && LFDMFHFMPFA != (ECENNHNBAME_o *)0x0) {
          pEVar1 = LFDMFHFMPFA;
        }
        if (pEVar1 != (ECENNHNBAME_o *)0x0) {
          fVar3 = CAAJMGKIPIE__DGOPOPEDMIG(__this,pEVar1,MJEOBEDMNHL,(MethodInfo *)method_00);
          fVar4 = fVar4 + fVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (ELAGKBMJCOD->fields)._size);
      if (0.0 < fVar4) {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar4 = LIIFLGALGNK__GFHNCCOMPAJ(fVar4,(MethodInfo *)0x0);
        if (0 < (ELAGKBMJCOD->fields)._size) {
          iVar2 = 0;
          index = 0;
          do {
            pEVar1 = (ECENNHNBAME_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                                Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
            if (pEVar1 == (ECENNHNBAME_o *)0x0 && LFDMFHFMPFA != (ECENNHNBAME_o *)0x0) {
              pEVar1 = LFDMFHFMPFA;
            }
            if (pEVar1 != (ECENNHNBAME_o *)0x0) {
              fVar3 = CAAJMGKIPIE__DGOPOPEDMIG(__this,pEVar1,MJEOBEDMNHL,(MethodInfo *)method_00);
              fVar4 = fVar4 - fVar3;
              if (fVar4 < 0.0) {
                return iVar2;
              }
              iVar2 = iVar2 + 1;
            }
            index = index + 1;
          } while (index < (ELAGKBMJCOD->fields)._size);
        }
      }
    }
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

