// RaidInfoTimeLeft$$IsTimeEnded @ RVA 0x319D6A4

bool RaidInfoTimeLeft__IsTimeEnded
               (RaidInfoTimeLeft_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  OLKPEJMEBPJ_o *__this_00;
  int64_t iVar2;
  
  if ((BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) ||
     (__this_00 = (BANHBMINMMP->fields).LFJPDELEIHG, __this_00 == (OLKPEJMEBPJ_o *)0x0)) {
    bVar1 = true;
  }
  else {
    iVar2 = OLKPEJMEBPJ__KPPFAPANAMH(__this_00,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
  }
  return bVar1;
}

