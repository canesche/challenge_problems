SELECT b.name AS name, a.name AS name FROM providers AS a, products AS b WHERE a.id = b.id_providers AND a.name = 'Ajax SA'