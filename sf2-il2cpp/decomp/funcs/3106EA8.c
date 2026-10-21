// OPNFCOGALLI$$NGILHAOFGEA @ RVA 0x3106EA8

bool OPNFCOGALLI__NGILHAOFGEA
               (IEFEBEDLHNN_o *LFALCONFCGH,IEFEBEDLHNN_o *NMGJAKHNCND,int32_t OAFGMHOFEKM,
               UnityEngine_Vector3_array *PDCJPCDLHCI,bool LBFDGHOEPPM,MethodInfo *method)

{
  uint uVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o *pCVar3;
  uint local_48;
  uint uStack_44;
  IEFEBEDLHNN_o *local_40;
  IEFEBEDLHNN_o *local_38;
  
  local_40 = NMGJAKHNCND;
  local_38 = LFALCONFCGH;
  if ((DAT_0456652b & 1) == 0) {
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<IEFEBEDLHNN>__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<int>__);
    DAT_0456652b = 1;
  }
  local_48 = 0;
  uStack_44 = 0;
  if (OAFGMHOFEKM == -1) {
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)&local_38,(Il2CppObject **)&local_40,
               Method_Util_JGJFNOOGAEP<IEFEBEDLHNN>__);
    LFALCONFCGH = local_38;
  }
  if (((((LFALCONFCGH != (IEFEBEDLHNN_o *)0x0) &&
        (uStack_44 = (LFALCONFCGH->fields).FLDBGCIKMKA, local_40 != (IEFEBEDLHNN_o *)0x0)) &&
       ((local_48 = (local_40->fields).FLDBGCIKMKA, OAFGMHOFEKM != -1 ||
        ((LBFDGHOEPPM ||
         (Util__JGJFNOOGAEP<int>
                    ((int32_t *)&uStack_44,(int32_t *)&local_48,Method_Util_JGJFNOOGAEP<int>__),
         LFALCONFCGH = local_38, local_38 != (IEFEBEDLHNN_o *)0x0)))))) &&
      (pCVar2 = (LFALCONFCGH->fields).CNMHHKAMGPI, pCVar2 != (CNDPAJOLKFN_o *)0x0)) &&
     (((local_40 != (IEFEBEDLHNN_o *)0x0 &&
       (pCVar3 = (local_40->fields).CNMHHKAMGPI, pCVar3 != (CNDPAJOLKFN_o *)0x0)) &&
      (PDCJPCDLHCI != (UnityEngine_Vector3_array *)0x0)))) {
    uVar1 = (uint)PDCJPCDLHCI->max_length;
    if ((uStack_44 < uVar1) && (local_48 < uVar1)) {
      return (pCVar3->fields).super.OHHDBINAJCB <= (pCVar2->fields).super.OHHDBINAJCB !=
             PDCJPCDLHCI->m_Items[(int)local_48].fields.x <=
             PDCJPCDLHCI->m_Items[(int)uStack_44].fields.x;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

