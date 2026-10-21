// OJEHKJHEBID$$MergeFrom @ RVA 0x34B63C8

void OJEHKJHEBID__MergeFrom(OJEHKJHEBID_o *__this,OJEHKJHEBID_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  EEHFEPPDBHL_o *pEVar2;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  long lVar4;
  OJEHKJHEBID_Fields *pOVar5;
  EEHFEPPDBHL_o **ppEVar6;
  
                    /* try { // try from 035b63e4 to 036b63eb has its CatchHandler @ 035b64a0 */
  if ((DAT_04568589 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Add__);
                    /* try { // try from 035b640c to 036b640f has its CatchHandler @ 035b648c */
    DAT_04568589 = 1;
  }
  if (IBKIPBJJCPG == (OJEHKJHEBID_o *)0x0) {
    return;
  }
                    /* try { // try from 035b6418 to 036b6433 has its CatchHandler @ 035b6490 */
  lVar4 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
  if (lVar4 != 0) {
    (__this->fields).ADEIKPGDIPM = lVar4;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      OJEHKJHEBID__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    lVar4 = (IBKIPBJJCPG->fields).HAKDPKINDPN;
    if (lVar4 != 0) {
                    /* try { // try from 035b6444 to 036b6457 has its CatchHandler @ 035b6498 */
      (__this->fields).HAKDPKINDPN = lVar4;
    }
    iVar1 = (IBKIPBJJCPG->fields).GPDALMOAKGG;
    if (iVar1 != 0) {
      (__this->fields).GPDALMOAKGG = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).IBFEHEDKGAL;
                    /* try { // try from 035b6458 to 036b647f has its CatchHandler @ 035b62d8 */
    if (iVar1 != 0) {
      (__this->fields).IBFEHEDKGAL = iVar1;
    }
    if ((IBKIPBJJCPG->fields).MMIHELOLFPP != (EEHFEPPDBHL_o *)0x0) {
      ppEVar6 = &(__this->fields).MMIHELOLFPP;
      pEVar2 = *ppEVar6;
      if (pEVar2 == (EEHFEPPDBHL_o *)0x0) {
                    /* try { // try from 035b6480 to 036b6483 has its CatchHandler @ 035b649c */
        pEVar2 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
                    /* try { // try from 035b6484 to 036b6487 has its CatchHandler @ 035b6494 */
                    /* try { // try from 035b6488 to 036b64b7 has its CatchHandler @ 035b62d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b640c with catch @ 035b648c
                        */
        EEHFEPPDBHL___ctor(pEVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6418 with catch @ 035b6490
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6484 with catch @ 035b6494
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6444 with catch @ 035b6498
                        */
        *ppEVar6 = pEVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6480 with catch @ 035b649c
                        */
        thunk_FUN_01c20e04(ppEVar6,pEVar2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b63e4 with catch @ 035b64a0
                        */
        pEVar2 = *ppEVar6;
        if (pEVar2 == (EEHFEPPDBHL_o *)0x0) goto LAB_035b6528;
      }
      EEHFEPPDBHL__MergeFrom(pEVar2,(IBKIPBJJCPG->fields).MMIHELOLFPP,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 035b64b8 to 036b64bb has its CatchHandler @ 035b64dc */
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* try { // try from 035b64bc to 036b64e3 has its CatchHandler @ 035b62d8 */
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MABPCBMOECE,
                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Add__);
      __this_01 = (__this->fields).MJIHCLLODMF;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                    /* catch() { ... } // from try @ 035b64b8 with catch @ 035b64dc */
                    /* try { // try from 035b64e4 to 036b64eb has its CatchHandler @ 035b6500 */
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MJIHCLLODMF,
                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
        pOVar5 = &__this->fields;
                    /* try { // try from 035b64ec to 036b64f7 has its CatchHandler @ 035b62d8 */
                    /* try { // try from 035b64f8 to 036b64ff has its CatchHandler @ 035b6500 */
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                           (pOVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0)
        ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b64e4 with catch @ 035b6500
                       catch(type#2 @ 00000000) { ... } // from try @ 035b64f8 with catch @ 035b6500
                        */
        pOVar5->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pOVar5,pGVar3);
        return;
      }
    }
  }
LAB_035b6528:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

