// OPNFCOGALLI$$NGILHAOFGEA @ RVA 0x3108F58

bool OPNFCOGALLI__NGILHAOFGEA
               (GBJGJEGPHKD_o *HBHPFKJMGCK,ECENNHNBAME_o *MDFMIOAIAHH,int32_t OAFGMHOFEKM,
               System_Collections_Generic_List_CNDPAJOLKFN__o *PDCJPCDLHCI,bool LBFDGHOEPPM,
               MethodInfo *method)

{
  bool bVar1;
  ECENNHNBAME_MNDFKOHIAHI_o *__this;
  System_String_o *pSVar2;
  IEFEBEDLHNN_o *LFALCONFCGH;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  IEFEBEDLHNN_o *NMGJAKHNCND;
  
  if ((DAT_04566538 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9168);
    DAT_04566538 = 1;
  }
  if (((MDFMIOAIAHH != (ECENNHNBAME_o *)0x0) &&
      (__this = (MDFMIOAIAHH->fields).FGEAOBODDAP, __this != (ECENNHNBAME_MNDFKOHIAHI_o *)0x0)) &&
     (pSVar2 = ECENNHNBAME_MNDFKOHIAHI__LELBMBHAPOM(__this,(MethodInfo *)0x0),
     HBHPFKJMGCK != (GBJGJEGPHKD_o *)0x0)) {
    LFALCONFCGH = GBJGJEGPHKD__OCJAHBKIFNO(HBHPFKJMGCK,pSVar2,(MethodInfo *)0x0);
    if ((LFALCONFCGH != (IEFEBEDLHNN_o *)0x0) &&
       (NMGJAKHNCND = (LFALCONFCGH->fields).GAFCPEOANDD, NMGJAKHNCND != (IEFEBEDLHNN_o *)0x0)) {
      bVar1 = OPNFCOGALLI__NGILHAOFGEA
                        (LFALCONFCGH,NMGJAKHNCND,OAFGMHOFEKM,PDCJPCDLHCI,LBFDGHOEPPM,method);
      return bVar1;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_032090e0:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items,pSVar2);
        pSVar2 = (MDFMIOAIAHH->fields).JIJLBFGKNJK;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_032090e0;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_9168,args,(MethodInfo *)0x0);
          return false;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

