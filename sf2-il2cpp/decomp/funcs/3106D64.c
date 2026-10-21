// OPNFCOGALLI$$NGILHAOFGEA @ RVA 0x3106D64

bool OPNFCOGALLI__NGILHAOFGEA
               (GBJGJEGPHKD_o *KCLAGHLLOME,System_String_o *FMFIHPBNGBJ,int32_t OAFGMHOFEKM,
               UnityEngine_Vector3_array *PDCJPCDLHCI,bool LBFDGHOEPPM,MethodInfo *method)

{
  bool bVar1;
  IEFEBEDLHNN_o *LFALCONFCGH;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  IEFEBEDLHNN_o *NMGJAKHNCND;
  
  if ((DAT_04566512 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9167);
    DAT_04566512 = 1;
  }
  if (KCLAGHLLOME != (GBJGJEGPHKD_o *)0x0) {
    LFALCONFCGH = GBJGJEGPHKD__OCJAHBKIFNO(KCLAGHLLOME,FMFIHPBNGBJ,(MethodInfo *)0x0);
    if ((LFALCONFCGH != (IEFEBEDLHNN_o *)0x0) &&
       (NMGJAKHNCND = (LFALCONFCGH->fields).GAFCPEOANDD, NMGJAKHNCND != (IEFEBEDLHNN_o *)0x0)) {
      bVar1 = OPNFCOGALLI__NGILHAOFGEA
                        (LFALCONFCGH,NMGJAKHNCND,OAFGMHOFEKM,PDCJPCDLHCI,LBFDGHOEPPM,method);
      return bVar1;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((FMFIHPBNGBJ != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(FMFIHPBNGBJ,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)FMFIHPBNGBJ;
        thunk_FUN_01c20e04(args->m_Items,FMFIHPBNGBJ);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_9167,args,(MethodInfo *)0x0);
        return false;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

