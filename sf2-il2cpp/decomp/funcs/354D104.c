// LEGDPJHPEOB$$NMANJLBNKBG @ RVA 0x354D104

bool LEGDPJHPEOB__NMANJLBNKBG
               (LEGDPJHPEOB_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *MDNDPPNLDCP,
               EILGGBOIMGE_FMFDKGKCBBG_o *OKFMDMKDMCP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_String_o *a;
  System_String_o *b;
  double dVar4;
  double dVar5;
  
  if ((__this->fields).LDNECFGEICA == 1) {
    bVar3 = LEGDPJHPEOB__LMBKEEOPFKD(__this,MDNDPPNLDCP,OKFMDMKDMCP,method);
    return bVar3;
  }
  if (MDNDPPNLDCP != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(MDNDPPNLDCP,(MethodInfo *)0x0);
    if (!bVar3) {
      if (OKFMDMKDMCP == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d274;
      bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(OKFMDMKDMCP,(MethodInfo *)0x0);
      if (!bVar3) {
        a = (MDNDPPNLDCP->fields).DFJBJLBLBGB;
        b = (OKFMDMKDMCP->fields).DFJBJLBLBGB;
        goto LAB_0364d224;
      }
    }
    bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(MDNDPPNLDCP,(MethodInfo *)0x0);
    if (bVar3) {
      if (OKFMDMKDMCP == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d274;
      bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(OKFMDMKDMCP,(MethodInfo *)0x0);
      if (bVar3) {
        dVar4 = (MDNDPPNLDCP->fields).HNFHNNLOLGK;
        dVar5 = (OKFMDMKDMCP->fields).HNFHNNLOLGK;
        iVar1 = -0x80000000;
        if (dVar4 != INFINITY) {
          iVar1 = (int)dVar4;
        }
        iVar2 = -0x80000000;
        if (dVar5 != INFINITY) {
          iVar2 = (int)dVar5;
        }
        switch((__this->fields).ACCIHBHMFPN) {
        case 1:
          bVar3 = iVar1 == iVar2;
          break;
        case 2:
          bVar3 = iVar2 < iVar1;
          break;
        case 3:
          bVar3 = iVar2 <= iVar1;
          break;
        case 4:
          bVar3 = iVar1 < iVar2;
          break;
        case 5:
          bVar3 = iVar1 <= iVar2;
          break;
        default:
          bVar3 = false;
        }
        return bVar3;
      }
    }
    a = (System_String_o *)
        (*(MDNDPPNLDCP->klass->vtable)._3_ToString.methodPtr)
                  (MDNDPPNLDCP,(MDNDPPNLDCP->klass->vtable)._3_ToString.method);
    if (OKFMDMKDMCP != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      b = (System_String_o *)
          (*(OKFMDMKDMCP->klass->vtable)._3_ToString.methodPtr)
                    (OKFMDMKDMCP,(OKFMDMKDMCP->klass->vtable)._3_ToString.method);
LAB_0364d224:
      bVar3 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      return bVar3;
    }
  }
LAB_0364d274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

